
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include "../interface/IRenderer.hpp"
#include "../types/Vector2.hpp"

namespace Randoms::Internals
{
    class Box;
}

/// @brief Draws Player Boxes
class Randoms::Internals::Box: public Randoms::Interfaces::IRenderer
{
    public:

        Box (Vector2 pos, const char charSet = '-')
        {
            this->charSet = charSet;
            this->pos = pos;
        }

        void Render () override
        {
            for (int x = 0; x < pos.xPos; x += 1)
            {
                for (int y = 0; y < pos.yPos; y += 1)
                {
                    if 
                    (
                        x == 0 || x == int(pos.xPos - 1) 
                        ||
                        y == 0 || y ==  int (pos.yPos - 1) 
                    )
                    {
                        std::cout << charSet;
                    }
                    else
                    {
                        std::cout << " ";
                    }
                }
                std::cout << "\n";
            }
        }
        
    private:
        char charSet;
        Vector2 pos;
};

#endif