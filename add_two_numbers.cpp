#include <iostream>

int addSum(int *x, int y){
    std::cout << "Address of x: " << x << std::endl;
    std::cout << "Valuw of x :" << *x << std::endl;
    return *x + y;
}

int main(){
    int a, b;
    std::cout << "Enter two numbers to sum: ";
    std::cin >> a >> b;
    std::cout << "sum of the two numbers are: "<< addSum(&a,b) << std::endl;
    std::cout << "address of a :" << &a << std::endl;
    std::cout << "Value of a :" << a << std::endl;
    return 0;
}
