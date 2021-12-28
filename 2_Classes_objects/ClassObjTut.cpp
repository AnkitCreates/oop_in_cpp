#include <iostream>

using namespace std;
int main(){

    class employee
    {
    private:
        int id;
    public:
        string Name;
        int Salary;
        int Age;
    };

    employee employee1;
    employee1.Name = "Ankit";
    employee1.Salary = 790000000;    
    employee1.Age = 24;
    //employee1.id = 23;        //private data member

    cout << employee1.Name << endl;
    cout << employee1.Salary << endl;
    cout << employee1.Age << endl;
   // cout << employee1.id << endl;



return 0;
}