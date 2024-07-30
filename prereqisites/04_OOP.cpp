#include<iostream>
using namespace std;
class rectangle
{
private:           //acessible in own class
    int length;    //(abstraction)
    int breadth;
public:            //can be acessed anywhere in the code
    rectangle(int len,int brt);
    ~rectangle();
    int area();
};

rectangle::rectangle(int len,int brt) // constructor function that runs automatically when object is made
{
    length = len;
    breadth = brt;
}
int rectangle :: area(){     //a function specific to the class 
    return length * breadth;    
}
rectangle::~rectangle() // a destructor that destroys the object once the class is done with
{
    cout << "destructor called" << endl;
}

int main(int argc, char const *argv[])
{
    rectangle r1(2,5);    // initialising a rectangle object and giving values to its constructor
    int x = r1.area();    // storing the value given by the functyion in x
    cout << "the area of the rectangle is " << x << endl;

    rectangle * r2 = new rectangle(4,6);     // int * ptr = malloc(sizeof(int));  
    cout << r2->area() << endl;     // both are same
    delete r2;
    return 0;
}
