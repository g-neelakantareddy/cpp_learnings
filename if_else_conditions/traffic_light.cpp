/*
🚦 Challenge: Traffic Light Decision System
Problem Statement:
Write a program that:
Takes two inputs:
Light color (red, yellow, green)
Pedestrian present (yes or no)
Prints instructions like:
“Stop – Red light”
“Caution – Yellow light”
“Go – Green light and no pedestrian”
“Wait – Green light but pedestrian present”
*/


#include <iostream>

int main(){

    std::string light_color, pedestrain_present;

    std::cout << "Enter a light color (red / yellow / green): ";
    std::getline(std::cin, light_color);

    std::cout << "Is pedestrain present (yes or no)";
    std::cin >> pedestrain_present;


    if(light_color == "red"){
        std::cout << "Stop Red light\n";
    }else if(light_color == "yellow"){
        std::cout << "Caution Yellow light\n";
    }else if(light_color == "green"){
        if(pedestrain_present == "yes"){
            std::cout << "wait pedestrain is moving\n";
        }else{
            std::cout << "Go green light\n";
        }
    }else{
        std::cout << "Enter valid color\n";
    }

    return 0;
}