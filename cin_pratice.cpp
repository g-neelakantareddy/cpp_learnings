/*
Name: Neelakanta
Age: 25
Height: 5.9
Grade: A
*/

#include <iostream>

int main(){
    std::string name;
    int age;
    float height;
    char grade;

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your height: ";
    std::cin >> height;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    std::cout << "Name\t:" << name << "\n"      \
              << "Age\t:" <<age << "\n"         \
              << "Height\t:" << height << "\n"  \
              << "Grade\t:" << grade << "\n";

        return 0;
    
}