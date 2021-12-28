#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;

    int area(){             //no memory used for a function
        return length*breadth;
    }

    int perimeter(){        //no memory used for a function
        return 2*(length + breadth);
    }
};

int main(){

rectangle r1,r2;

r1.length = 10;
r1.breadth = 5;

cout << r1.area() << "\n" <<endl;

r2.length = 100;
r2.breadth = 50;
cout << r2.area();

return 0;
}