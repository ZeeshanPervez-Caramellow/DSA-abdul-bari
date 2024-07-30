#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[10];
    //initializing an array the elements not declared are automatically zero
    //if no elements declared then all values are garbage inside the array
    for(int i = 0; i < 10; i++)
    {
        cout<<A[i]<<endl;         //traversal over arrays
    } 
    return 0;
}
