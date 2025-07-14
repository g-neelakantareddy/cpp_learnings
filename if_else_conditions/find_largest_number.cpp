/*
Write a program that:
Takes three integers as input from the user
Prints the largest number

Enter three numbers: 12 45 30
Largest number is: 45
*/

#include <iostream>

int main(){

    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    int max = a;

    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    std::cout << max << " is a maximum number\n";


    return 0;
}