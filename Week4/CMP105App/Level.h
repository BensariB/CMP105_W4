#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Cursor.h"
#include "Background.h"


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	GameObject testSprite;
	Player player;
	Enemy evil;
	Enemy evil2;
	Cursor cursor;
	sf::Texture texture;
	sf::Texture texture2;
	sf::Texture texture3;
	sf::Texture ctexture;

	//TASK 6
	Background background;
	sf::Texture textureBackground;
	sf::View view;

};