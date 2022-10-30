
/*
    Ludo Map Drawer
*/

#ifndef GRID_HPP
#define GRID_HPP

#include <iostream>
#include <vector>
#include "internals/Box.hpp"

using namespace Randoms::Internals;
using namespace Randoms::Interfaces;

namespace Randoms
{
    class LudoGrid;
}

class Randoms::LudoGrid: public IRenderer
{
    public:

        LudoGrid ()
        {
            width  = 50;
            height = 50;

            for (int i = 0 ; i < 4; i += 1)
            {
                playersBox.push_back (Box (Vector2 (10,10)));
            }
        }

        void Render () override
        {
            for (IRenderer& box : playersBox)
            {
                box.Render ();
                std::cout << "\n\n";
            }

            // for (int x = 0; x < width; x += 1)
            // {
            //     for (int y = 0; y < height; y += 1)
            //     {
            //         std::cout << "-"; 
            //     }
            //     std::cout << "\n";
            // }
        }

    private:
        int width, height;
        std::vector <Box> playersBox;
};

#endif