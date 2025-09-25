#include <iostream>
#include <string>
using namespace std;

class Employee
{

private:
    int id;
    string name;

public:
    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Employee emp;

    emp.setId(101);
    emp.setName("Geek");

    cout << "Employee ID: " << emp.getId() << endl;
    cout << "Employee Name: " << emp.getName() << endl;

    return 0;
}