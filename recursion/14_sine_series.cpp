#include<iostream>
#include<cmath>

using namespace std;

float factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

float Sine(float x,int n){
    if (n == 0)
    return x;

    return Sine(x,n-1) + pow(-1,n) * (pow(x,2*n+1)/factorial(2*n+1));
}

int main(int argc, char const *argv[])
{
    float x = Sine(2,3);
    cout << x << endl;
    return 0;
}
