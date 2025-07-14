/*
Write a program that:
Takes an integer input from the user
Prints:
"Positive" if > 0
"Negative" if < 0
"Zero" if == 0
*/

#include <iostream>

int main(){

    int integer;
    std::cout << "Enter number to check positive / negative number: ";
    std::cin >> integer;

    if (integer > 0){
        std::cout << integer << " is a positive number\n";
    }else if(integer < 0){
        std::cout << integer << " is a negative number\n";
    }else{
        std::cout << "It's a zero\n";
    }

    return 0;
}