#include <iostream>

void testVal(int x)
{
    x = x * 10;
    std::cout << "X calculated by value is: " << x << "\n";
}

void testRef(int &y) // reference to an existing object
{
    y = y * 10;
    std::cout << "Y calculated by reference is: " << y << "\n";
}

int main()
{
    int x = 10;
    int y = 10;

    testVal(x);
    std::cout << "X original by value is: " << x << "\n";

    testRef(y);
    std::cout << "Y original by reference is: " << y << "\n";

    return 0;
}
