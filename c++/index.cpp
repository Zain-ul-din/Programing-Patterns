
/*

    Exercise: Compile-time assertions

    * Partial template specialization
    * Local classes
    * Mappings between types and values (the Int2Type and Type2Type class templates)
    * The Select class template, a tool that chooses a type at compile time based on a Boolean condition
    * Detecting convertibility and inheritance at compile time
    * TypeInfo, a handy wrapper around std::type_info
    * Traits, a collection of traits that apply to any C type

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <typeinfo>
#include <algorithm>
#include <cassert>
#include <memory.h>
#include <type_traits>

/*
    The simplest solution to compile-time assertions (Van Horn 1997), and one that works
    in C as well as in C, relies on the fact that a zero-length array is illegal.
*/

// Template specialization: https://cplusplus.com/doc/oldtutorial/templates/

/*
    template <bool> void Func () {}
    template <> void Func <true> () {}
    template <> void Func <false> () { throw "Invalid Exeception";}
*/

/*
    specialization template approach
*/
template<bool> struct CompileTimeError;
template<> struct CompileTimeError<true> {};


// #define COMPILE_TIME_CHECK(expr) int __X__ [(expr) ? 1 : 0] // c approach
#define COMPILE_TIME_CHECK(expr) CompileTimeError<expr>()



// Typer Caster
template <class From, class To>
To SafeReinterpretCast (From from)
{
    COMPILE_TIME_CHECK (true); // compile time assertions
    assert (sizeof (From) >= sizeof (To)); // runtime assertions
    return reinterpret_cast <To> (from);
}

// Variadic Templates
template <class... T>
void PrintToString (T... args)
{
    (([&](auto val)
    {
        std::cout << std::to_string (args);
    }
    (args)),...);
}

// Driver Code
int main ()
{
    // static_assert(false, "Hey user! You suck!");
    int num = 100;
    int* num_ptr = &num; 
    char* num_to_binary = SafeReinterpretCast <int*,char*> (num_ptr);
    std::cout << "SafeReinterpretCast : " << num_to_binary << "\n";
    
    int _int =10;
    float _float = 2.5;

    PrintToString (_int, _float);

    return 0;
}

