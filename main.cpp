#include <iostream>
#include "functions.h"
#include <string.h>

int main(){
    std::string increment = "\n-------------------------------------------- ";
    box(5,4);
    std::cout << increment << std::endl;
    checkerBoard(11,6);
    std::cout << increment << std::endl;
    cross(8);
    std::cout << increment << std::endl;
    lower(6);
    std::cout << increment << std::endl;
    upper(6);
    std::cout << increment << std::endl;
    trapezoid(12, 5);
    std::cout << increment << std::endl;
    checkerboard3x3(27,27);

}