// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush; // std::flush = print(), std::endl = println()
    std::cin >> name; // std::cin only handles single words (ignores everything after a space)

    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}