#include <iostream>

class Demo{
    private:
        static int a;
    public:
        static void func(){
            std::cout << "Value of a: " << a;
        }
};
int Demo::a = 45;

int main(){
    Demo obj;

    obj.func();

    return 0;
}
