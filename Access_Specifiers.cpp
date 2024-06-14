#include<iostream>
using namespace std;

class Student
{
    public:

    string name;
    int attendance;
    float total_marks;

    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }

};

int main()
{
    Student s;
    s.name = "Shuvajit";
    s.attendance = 99;
    s.total_marks = 85.5;
    s.calculate_percentage();
    return 0;
}
