
/*
    Ludo Game in c++
*/

#include <iostream>
#include <memory>
#include "lib/Grid.hpp"


// Driver Code
int main ()
{
    std::cout << __cplusplus << "\n";
    Randoms::LudoGrid ludoGrid;
    ludoGrid.Render ();
    
    std::cin.get ();
    system ("pause");
    return 0;
}


