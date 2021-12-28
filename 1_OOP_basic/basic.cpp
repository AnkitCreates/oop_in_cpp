#include <iostream>
using namespace std;

    class student     //class 
    {
    private:         //private member
        int roll;
        string name;    //members

    public:          //public member
        int slot;
    }student1,student2,s3;  //objects namely student1,student2 & s3

int main(){

// cin >> student1.roll;
// cout << student1.roll;         //inaccesible due to private class

cin >> student1.slot;             //using dot opr.
cout << student1.slot;
    return 0;
}