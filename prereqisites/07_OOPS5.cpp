#include<iostream>
#include<string>
using namespace std;
class Sum {
    public :
        int sum(int x,int y){         //Function overloading allows you to define multiple functions in the
            return x + y;             // same class that share the same name but have different parameter 
        }                              //lists.the compiler differentiates on the basis of parameter lists
        int sum(int x,int y,int z){
            return x + y + z;
        }
};
int main(int argc, char const *argv[])
{
    Sum a;
    int p = a.sum(3,4,6);
    int q = a.sum(2,3);
    cout<<"the sum of the numbers are" << p <<" and the sum of other numbers are "<< q << endl;
    return 0;
}
