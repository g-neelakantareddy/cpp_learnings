/*
🧊🔥 Write a program that:
Takes a temperature in Celsius from the user.
Prints:
"Freezing" if temperature is ≤ 0
"Cold" if > 0 and ≤ 15
"Warm" if > 15 and ≤ 30
"Hot" if > 30
*/

#include <iostream>

int main(){

    int temperature;
    std::cout << "Enter your temperature: ";
    std::cin >> temperature;

    if(temperature <= 0){
        std::cout << "It's freezing\n";
    }else if(temperature <= 15){
        std::cout << "It's cold\n";
    }else if(temperature <= 30){
        std::cout << "It's Warm\n";
    }else{
        std::cout << "It's hot\n";
    }

    return 0;
}