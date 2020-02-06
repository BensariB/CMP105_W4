#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	
	texture.loadFromFile("gfx/Mushroom.png");

	player.setTexture(&texture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);

	texture2.loadFromFile("gfx/goomba.png");
	evil.setTexture(&texture2);
	evil.setSize(sf::Vector2f(100, 100));
	evil.setPosition(400, 400);
	evil.setVelocity(100, 100);

	texture3.loadFromFile("gfx/sonic.png");
	evil2.setTexture(&texture3);
	evil2.setSize(sf::Vector2f(100, 100));
	evil2.setPosition(900, 100);
	evil2.setVelocity(101, 101);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	player.setInput(input);
	player.handleInput(dt);
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
}

// Update game objects
void Level::update(float dt)
{
	evil.enemymove(window, dt);
	evil2.enemymove(window, dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(player);
	window->draw(evil);
	window->draw(evil2);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}