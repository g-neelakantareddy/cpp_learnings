/*
Write a program that:
Takes monthly salary as input.
If salary is:
50,000: Print "High income - taxed"
Between 30,000 and 50,000: Print "Medium income - partially taxed"
Below 30,000: Print "Low income - not taxed"
*/

#include <iostream>

int main(){

    int salary;
    std::cout << "Enter your salary: ";
    std::cin >> salary;

    if(salary < 0){
        std::cout << "Please enter valid salary\n";
    }else if(salary > 50000){
        std::cout << "High income taxed\n";
    }else if(salary > 30000){
        std::cout << "Medium income - partially taxed\n";
    }else{
        std::cout << "Low income - not taxed\n";
    }
    
    return 0;
}