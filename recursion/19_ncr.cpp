#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1)return 1;
    return n*factorial(n - 1);
}

int c1(int n,int p){
    return factorial(n)/(factorial(n - p)*factorial(p));
}

int c2(int n,int r){
    if(n == r || r == 0)return 1;
    return c2(n - 1,r - 1) + c2(n - 1,r);
}

int main(int argc, char const *argv[])
{
    cout << factorial(4) << endl << c1(3,2)<< endl << c2(3,2);
    return 0;
}
