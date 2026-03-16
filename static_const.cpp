#include <iostream>


class Demo
{
public:
    static const int x = 100;   // static const variable
};

int main()
{
    cout << "Value of x: " << Demo::x << endl;

    return 0;
}
