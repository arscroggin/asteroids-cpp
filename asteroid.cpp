#include <iostream>
#include <cstdlib>
#include <ctime>
#include "asteroid.h"

int Asteroid::_idCounter = 0;

const int MinXLocation = 0;
const int MaxXLocation = 1000;
const int MinYLocation = 0;
const int MaxYLocation = 1000;

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

void Asteroid::move(int deltaX, int deltaY)
{
	_x = _x + deltaX;

	if (_x > MaxXLocation)
	{
		_x = MaxXLocation;
	}
	else if (_x < MinXLocation)
	{
		_x = MinXLocation;
	}

	_y = _y + deltaY;

	if (_y > MaxYLocation)
	{
		_y = MaxYLocation;
	}
	else if (_y < MinYLocation)
	{
		_y = MinYLocation;
	}
}
