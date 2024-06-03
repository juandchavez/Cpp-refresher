
#include <regex>
//#define ARRAY_PRACTICE
#define HEADER_PRACTICE


#ifdef HEADER_PRACTICE
#include "foo.h"
#endif

#ifdef ARRAY_PRACTICE
/*
    Passing by value
*/
void doubleArray(int input[], int size){
    for(int i = 0; i < size; i++){
        input[i] *= 2;
    }
}

/*
    Passing by reference
*/
void printArray(int (&input)[], int &size){
    for(int i = 0; i < size; i++){
        std::cout << input[i] << " ";
    }
}
#endif

int main(int argc, char *argv[])
{

    std::cout << "--- Start of Program ---" << std::endl;
    int temp = 0;           // Holds temporary integers

    #ifdef ARRAY_PRACTICE
    int size  = 10;         // Size of the array
    int myArr[size] = {0};  // An array of integers of size n initialized to 0
    int userNum = -1;       // User input set to -1

    std::cout << "Enter 10 elements: " << std::endl;
    // Get numbers from user
    while (temp < size){
        std::cin >> userNum;
        // Check for negative values
        if(userNum < 0){
            std::cout << "Please enter a positive number!\n" << std::endl;
        }else{
            // Put them into the array
            myArr[temp] = userNum;
            // Increase the iterator by 1
            temp++;
        }
    }
    // Reset temp value
    temp = 0;
    
    // Print array
    printArray(myArr, size);

    std::cout << "\nNow we double the array! (Passing by value)\n" << std::endl;
    doubleArray(myArr, size);

    for (int i = 0; i<size;i++){
        std::cout << myArr[i] << " ";
    }
    #endif

    #ifdef HEADER_PRACTICE
    /*
        Recall that with just simple header files, it sort of acts like a 
        spicy function
        So they don't need foo::foo, just foo

        With classes; which inlcude both .h and .cpp files, are more robust
        They need foo::foo

    */
    std::cout << "Enter the size of foo: ";
        std::cin >> temp;
        foo(temp);

    #endif

    std::cout << "--- End of Program ---" << std::endl;

    return 0;
}