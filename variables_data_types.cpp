# include <iostream>

int main(){

    int integer = 10;
    float decimal = 20.2;
    char alphabet = 'C';

    std::cout << "Interger = " << &integer  << '\n' 
              << "Decimal = " << decimal << '\n' 
              << "Alphabet = " << alphabet<< "\n";

    return 0;
}