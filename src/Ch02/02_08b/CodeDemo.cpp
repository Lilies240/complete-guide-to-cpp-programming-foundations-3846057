// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};


int main(){
    /* priority is on local scope
        so if you use
        enum asset_type {sound}
        and
        int sound = 8;
        it will assume you mean this rather than asset_type's sound
    */
    int sound = 8;

    int asset_value;
    asset_value = (int) asset_type::sound;
    std::cout << "asset_value = " << asset_value << std::endl;

    // you can also use
    asset_type asset_value_2;
    asset_value_2 = asset_type::sound;
    std::cout << "asset_value = " << (int) asset_value_2 << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
