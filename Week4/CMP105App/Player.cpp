#include "Player.h"
#include <iostream>

void Player::handleInput(float dt)
{
	int velx = 0;
	int vely = 0;

	if (input->isKeyDown(sf::Keyboard::Right)) {
		velx = 500;
	}
	if (input->isKeyDown(sf::Keyboard::Left)) {
		velx = -500;
	}
	if (input->isKeyDown(sf::Keyboard::Up)) {
		vely = -500;
	}
	if (input->isKeyDown(sf::Keyboard::Down)) {
		vely = 500;
	}

	setVelocity(velx, vely);
	move(velocity * dt);
}
