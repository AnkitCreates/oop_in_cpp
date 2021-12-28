#include <iostream>
using namespace std;

    class Abstractemployee
    {
       virtual void getpromotion() = 0;
    };

    class employee :Abstractemployee    //signing the contract
    {
    private:
        int id;
    public:
        string Name;
        long long int Salary;
        int Age;

    employee(string n,long long int s, int a){         //constructor with 3 para. to construct objs.
        Name = n;
        Salary = s;
        Age = a;
    }  //end of constructor
    
    //Displaydetails function
    void displayDetails(){                              
    //using namespace std;
    cout << "Name ~ " << Name << endl;
    cout << "Salary ~ " << Salary << endl;
    cout << "Age ~ " << Age << endl; 
    } //end of displayDetails5

    //Private member accessing method
    void setId(int id_no)
    {
        id = id_no;
    }

    int getId(){
        return id;
    }
        void getpromotion(){
            if (Salary <= 800000000 )
            {
                cout << Name << " has been promoted " <<"having id = " << id << endl;
            }
            else
            {
                cout << Name << " promotion has been denied as salary is " << Salary << endl;
            }
        };
    
    };
    
    int main(){

    employee employee1 = employee("Ankit", 10 , 25);
    employee1.displayDetails();

    employee employee2 = employee("Bill gates", 10000000000 , 1985);
    employee2.displayDetails();
    employee1.setId(3);   //id data is private and only accessible by other class via this method only, which has been been specified public
    cout << employee1.Name << " Id is " << employee1.getId()  << endl;

    employee1.getpromotion();
    employee2.getpromotion();


return 0;
}