/*
Write a program that:
Takes a year as input
Checks and prints:
"Leap year" if:
Divisible by 4 and
Not divisible by 100 unless divisible by 400
Otherwise: "Not a leap year"
*/

#include <iostream>

int main(){


    int year;
    std::cout << "Enter a year to check leap or not: ";
    std::cin >> year;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
        std::cout << year <<" is a Leap year\n";
    }else{
        std::cout << year << " is not a leap year\n";
    }

    return 0;
}