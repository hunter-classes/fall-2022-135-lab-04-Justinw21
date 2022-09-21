#include <iostream>
#include "functions.h"
#include <string.h>

std::string box(int width, int height){
    std::string result;
    for(int row = 0; row < height; row++){
        for(int col = 0; col < width; col++){
            result += "*";
        }
        result.append("\n");
    }
    std::cout << result;
    return result;
}

std::string checkerBoard(int width, int height){
    std::string result;
    for(int row = 0; row < height; row++){
            if(row % 2 == 0){
                result.append("\n");
                for(int col = 0; col < (width+1)/2 ; col++){
                    result.append("* ");
                }
            }else{
                    result.append("\n ");
                    for(int col = 0; col < width/2; col++){
                        result.append("* ");
                    }
            }
    }
    std::cout << result;
    return result;
}

std::string cross(int size){
    std::string result;
    int space = size - 3;
    int increment = 0;
    std::string spaces = "";
    for(int i = 0; i <= (size-1)/2; i++){
        result.append(spaces);
        result.append("*");
        for(int a = 0; a <= space - increment; a++){
        result.append(" ");
        }
        result.append("*\n\n");
        increment+=2;
        spaces.append(" ");
    }
    increment-=2;
    spaces.erase(spaces.length()-1);
    for(int i = 0; i <= (size-1)/2; i++){
        result.append(spaces);
        result.append("*");
        for(int j = 0; j <= space - increment; j++){
        result.append(" ");
        }
        result.append("*\n\n");
        increment-=2;
        if(spaces.length() > 0){
            spaces.erase(spaces.length()-1);
        }
    }
    std::cout << result;
    return result;
}

std::string lower(int size){
    std::string result;
    for(int i = 0; i < size; i++){
        for(int num = 0; num < i+1; num++){
            result.append("*");
        }
        result.append("\n\n");
    }
    std::cout << result;
    return result;
}

std::string upper(int size){
    std::string result;
    for(int i = 0; i < size; i++){
        for(int num = size; num > i; num--){
            result.append("*");
        }
        result.append("\n\n");
    }
    std::cout << result;
    return result;
}

std::string trapezoid(int width, int height){
    std::string result;
    int spaces = 0;
    if((width/2)+1 <= height){
        std::cout << "Impossible Shape!" << std::endl;
        exit(1);
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j <= spaces; j++){
            result.append(" ");
            }
        for(int i = 0; i < width; i++){
                result.append("*");
        }
        for(int j = 0; j <= spaces; j++){
            result.append(" ");
            }
        spaces++;
        result.append("\n\n");
        width-=2;
    }
    std::cout << result;
    return result;
}
std::string checkerboard3x3(int width, int height)
{
    std::string result;
	int star = 0;
	int space = 0;
	for(int row = 0; row < height; row++)
	{
		for(int col = 0; col < width; col++)
		{
			if((col % 6 < 3 && row % 6 < 3) || (col % 6 >= 3 && row % 6 >= 3))
			{
				if(star < 3){
					result.append("*");
				}

				star++; 

				if(star == 3){
					star = 0;
				}
			}	
			else{
				if(space < 3){
                    result.append(" ");
				}

				space++;

				if(space == 3){
					space = 0;
				}
			}
		}
		result.append("\n");
	}	
    std::cout << result;
	return result;
}