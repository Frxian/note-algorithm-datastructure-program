#include <tuple>
#include <iostream>

#pragma pack(push, 2)
struct A {
    int i;
    char c;
    char e;
    double d;
};
#pragma pack(pop)

int main(void)
{
    // std::tuple<char, char, int, double, double> t;
    std::tuple<int, double, char, char, double> t;

    // std::cout << "size: " << sizeof(t);

    A a;
    std::cout << "size: " << sizeof(a);
    return 0;
}
