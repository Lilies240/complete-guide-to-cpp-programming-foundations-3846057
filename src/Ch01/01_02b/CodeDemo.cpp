// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

/*
    Improved by ME
    huehuehuehuehuehuehuehuehue~~~
*/

#include <iostream>
#include <cstdio> // allows for C-style print statements such as "printf"

/* FOR EXECUTABLES IN THE TERMINAL
int argc // number of arguments
char* argv[] // string arguments passed after the file name

 int main(int argc, char* argv[]) */

int main() {
    // testing int to string conversion in cout
    int x = 3;
    std::cout << "Hi " << "there!" << " :" << x << std::endl;
    printf("hey cutie~");
    if (x < 5) {
        std::cout << "We haven't reached 5... T-T" << std::endl;
    }
    std::cout << std::endl << std::endl;

    return 0;
}