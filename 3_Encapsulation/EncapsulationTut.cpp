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

    void setId(int id_no){
        id = id_no;
    }
    int getId(){
        return id;
    }
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

    employee1.setId(3);   //id data is private and only accessible by other class via this method only which has been been specified public
    cout << employee1.Name << " Id is " << employee1.getId()  << endl;

return 0;
}