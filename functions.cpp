#include <iostream>
#include "functions.h"
#include <string.h>

int box(int width, int height){
    for(int row = 0; row < height; row++){
        for(int col = 0; col < width; col++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}

int checkerBoard(int width, int height){
    for(int row = 0; row < height; row++){
        for(int col = 0; col < width/2; col++){
            if(row % 2 == 0){
                std::cout << "*";
            }else{
                std::cout << " ";
                std::cout << "*";
            }
        }
    }
}