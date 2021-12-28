#include <iostream>
using namespace std;

    class employee
    {
    private:
        int id;
    public:                   
        string Name;
        int Salary;
        int Age;

    
    void displayDetails(){                              
    //using namespace std;
    cout << "Name ~ " << Name << endl;
    cout << "Salary ~ " << Salary << endl;
    cout << "Age ~ " << Age << endl;    
    }

    employee(string name, int salary, int age){         //constructor to construct objs.
        Name = name;
        Salary = salary;
        Age = age;
    }  //end of constructor
    };

int main(){
    employee employee1 = employee("constructor", 10 , 25);
    employee1.displayDetails();

    employee employee2 = employee("constructor2", 11 , 1985);
    employee2.displayDetails();

return 0;
}