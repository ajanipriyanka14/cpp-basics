#include <iostream>


class Demo
{
    int x;

public:
    Demo(int a)
    {
        x = a;
    }

    Demo(Demo &d)   // copy constructor
    {
        x = d.x;
    }

    void display()
    {
        cout << "Value: " << x << endl;
    }
};

int main()
{
    Demo d1(10);
    Demo d2 = d1;   // copy constructor called

    cout << "Object 1:" << endl;
    d1.display();

    cout << "Object 2:" << endl;
    d2.display();

    return 0;
}
