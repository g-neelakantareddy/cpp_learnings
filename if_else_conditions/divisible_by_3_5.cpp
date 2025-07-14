/*
Write a program that:
Takes an integer input
Prints:
"Divisible by both 3 and 5"
"Divisible by only 3"
"Divisible by only 5"
"Not divisible by 3 or 5"
*/

#include <iostream>

int main(){

    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 3 == 0 && number % 5 == 0){
        std::cout << number << " is divsible by both 3 and 5\n";
    }else if(number % 3 == 0){
        std::cout << number << " is divisible by only 3\n";
    }else if(number % 5 == 0){
        std::cout << number << " is divisible by only 5\n";
    }else{
        std::cout << number << " is not divisible by both 3 and 5\n";
    }

    return 0;
}