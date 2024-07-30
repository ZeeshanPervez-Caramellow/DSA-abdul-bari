#include<iostream>
using namespace std;
void print(int a){
    cout << "the value is " << a << endl;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    int &b = a;    //here the &b is a reference
    //b and a is the same name for one memory block
    b = 8;

    //cout << a << endl << b << endl;

    print(a);
    return 0;
}
