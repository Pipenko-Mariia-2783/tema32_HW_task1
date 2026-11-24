#include <iostream>
#include <string>
namespace A {
    namespace B {
        void show() {
            std::cout << "namespace function";
        };
    }
}
void show() {
    std::cout << "Global function";
};
int main()
{
    using namespace A::B;
    A::B::show();
    ::show();
    
}