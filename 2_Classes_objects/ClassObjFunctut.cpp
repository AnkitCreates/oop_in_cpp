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
    };
    
    int main(){
    employee employee1;
        employee1.Name = "Ankit";
        employee1.Salary = 790000000;    
        employee1.Age = 24;
        //employee1.id = 23;        //private data member

        cout << employee1.Name << endl;
        cout << employee1.Salary << endl;
        cout << employee1.Age << endl << "\n\n\n";
        //cout << employee1.id << endl;

    employee1.displayDetails();

    
    employee employee2;
    employee2.Name = "Jr";
    employee2.Salary = 2000;    
    employee2.Age = 2;

        cout <<"\n\n\n" << employee2.Name << endl;
        employee2.displayDetails();




return 0;
}