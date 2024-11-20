#include <iostream>
#include <cstdlib>
#include <ctime>
#include "asteroid.h"

int Asteroid::_idCounter = 0;

Asteroid::Asteroid()
{
	_id = ++_idCounter;
	_x = 0;
	_y = 0;
}

int Asteroid::getX() const
{
	return _x;
}

int Asteroid::getY() const
{
	return _y;
}

int Asteroid::getId() const
{
	return _id;
}
