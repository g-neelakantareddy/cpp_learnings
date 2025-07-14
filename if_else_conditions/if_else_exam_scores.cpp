/*
Write a program that:
Takes an exam score from user
Based on score:
A if ≥ 90
B if ≥ 75
C if ≥ 60
Fail otherwise
*/


#include <iostream>

int main(){

    int score;

    std::cout << "Enter your score to know grade: ";
    std::cin >> score;

    if(score >= 90){
        std::cout << "You got 'A' grade\n";
    }else if(score >= 75){
        std::cout << "You got 'B' grade\n";
    }else if(score >= 60){
        std::cout << "You got 'C' grade\n";
    }else{
        std::cout << "You are fail\n";
    }

    return 0;
}