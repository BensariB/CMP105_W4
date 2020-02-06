#include "Enemy.h"

void Enemy::enemymove(sf::RenderWindow* hwnd, float dt)
{
	
	if (getSize().x + getPosition().x > hwnd->getSize().x) {
		velocity.x = -100;
	}
	else if (getPosition().x < 0) {
		velocity.x = 100;
	}

	if (getSize().y + getPosition().y > hwnd->getSize().y) {
		velocity.y = -100;
	}
	else if (getPosition().y < 0) {
		velocity.y = 100;
	}
	move(velocity * dt);
}
