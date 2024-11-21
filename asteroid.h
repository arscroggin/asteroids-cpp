#ifndef ASTEROID_H
#define ASTEROID_H

#include <string>

class Asteroid
{
private:
    int _id;
    int _x;
    int _y;
    static int _idCounter;

public:
    // Constructor
    Asteroid();

    int getX() const;
    int getY() const;
    int getId() const;
    void move(int deltaX, int deltaY);

};

#endif // ASTEROID_H