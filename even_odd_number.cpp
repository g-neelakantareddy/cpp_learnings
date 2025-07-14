/*
🧮 Even or Odd Checker
Write a program that:
Takes an integer input from user
Checks if it's even or odd
Prints result
*/

#include <iostream>

int main(){

    int number;
    
    std::cout << "Enter a number to find even or add: ";
    std::cin >> number;

    if(number < 0){
        std::cout << "Enter only positive numbers\n";
    }else if(number % 2 == 0){
        std::cout << number << " is a even number\n";
    }else{
        std::cout << number << " is a odd number\n";
    }


    return 0;
}