
#ifndef Vector2_HPP
#define VECTOR2_HPP

namespace Randoms
{
    struct Vector2;
}

/// @brief Reperesent position in game map
struct Randoms::Vector2
{
    Vector2 ()
    {
        this->xPos = 0;
        this->yPos = 0;
    }
    
    Vector2 (int xPos, int yPos)
    {
        this->xPos = xPos;
        this->yPos = yPos;
    }

    int xPos, yPos;
};

#endif