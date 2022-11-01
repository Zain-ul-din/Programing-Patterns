#include <iostream>
#include <concepts>

// Efficient Way to compare two types in c++

template <class T>
concept SupportEquialty = requires (T t) { t < t && t > t && t == t; };

template <class T>
requires SupportEquialty <T>
int Compare (T lhs, T rhs)
{
    return 0;
}

int main ()
{
    std::cout << __cplusplus << "\n";
    std::cin.get ();
    return 0;
}
