#include <iostream>

/*
    Passing by value
*/
void doubleArray(int input[], int size){
    for(int i = 0; i < size; i++){
        input[i] *= 2;
    }
}

void printArray(int *input){

    // Determining size of array
    // size = total memory size / memory size of an element
    size_t size = sizeof(input)/sizeof(input[0]);

    for(int i = 0; i<size;i++){
        std::cout << input[i] << " ";
    }
}

int main(int argc, char *argv[])
{
    const int size  = 10;
    int myArr[size] = {0};
    int userNum = -1;
    int temp = 0;

    std::cout << "Enter 10 elements: " << std::endl;

    while (temp < size){
        std::cin >> userNum;
        if(userNum < 0){
            std::cout << "Please enter a positive number!\n" << std::endl;
        }else{
            myArr[temp] = userNum;
            temp++;
        }
    }

    printArray(myArr);

    std::cout << "\nNow we double the array! (Passing by value)\n" << std::endl;
    doubleArray(myArr, size);

    for (int i = 0; i<size;i++){
        std::cout << myArr[i] << " ";
    }

    return 0;
}