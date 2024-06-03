#include <iostream>

int foo (int x){
    std::cout << "f";
    for(int i = 0; i < x; i++){
        std::cout << "o";
    }
    std::cout << std::endl;

}