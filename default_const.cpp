#include <iostream>


class Student
{
    int id;
    string name;

public:
    Student(int i = 1, string n = "Priyanka")
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;              // uses default values
    Student s2(2, "Riya");   // uses given values

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}
