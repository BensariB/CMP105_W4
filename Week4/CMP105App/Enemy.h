#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
public:
	void enemymove(sf::RenderWindow* hwnd, float dt);
};

