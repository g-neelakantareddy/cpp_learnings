/*Write a program that:

Takes age as input from the user

Based on age, prints:

Underage if < 18

Adult if between 18 and 60

Senior if > 60*/

#include <iostream>

int main(){
    
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age < 0){
        std::cout << "you are Underage" << "\n";
    }
    else if (age < 18){
        std::cout << "you are adult" << "\n";
    }
    else if (age < 60){
        std::cout << "you are not yet born" << "\n";
    }
    else{
        std::cout << "you are senior" << "\n";

    }

    
    return 0;

}