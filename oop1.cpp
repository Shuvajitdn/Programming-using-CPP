#include <iostream>
#include <string> 

using namespace std;


class SchoolBus
{
private:
    int number_tyres;
    string name;
    int capacity;
    int mileage;  

    string school_name;  

    int number_holidays;

public:
   

    void calculateMileage()
    {
        cout << "The mileage is " << mileage << endl;
    }

    void printSchoolName()
    {
        cout << "The name of the school is " << name << endl;
    }
};

int main()
{
    

   
    SchoolBus bus;

    
    bus.calculateMileage();
    bus.printSchoolName();

    return 0;
}
