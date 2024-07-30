#include<iostream>
#include<cmath>

using namespace std;

float factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

float cosine(float x,int n){
    if (n == 0)
    return 1;

    return cosine(x,n-1) + pow(-1,n) * (pow(x,2*n)/factorial(2*n));
}

int main()
{
    float x = cosine(1,4);
    printf("%f",x);
    return 0;
}
