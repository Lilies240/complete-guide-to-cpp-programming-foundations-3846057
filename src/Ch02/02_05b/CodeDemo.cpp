// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

// anything other than 0 or false is true
// int: 123, -50, 045 (octal), 0x3A (hex), 0b1101 (binary), 45u or 45U (unsigned

#include <iostream>

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    my_flag = true;
    std::cout << "my_flag = " << my_flag << std::endl;

    std::cout << "a + b = " << (a+b) << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    unsigned int positive; // use for larger values that don't need to be negative
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}