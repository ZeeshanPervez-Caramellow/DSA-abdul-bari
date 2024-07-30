#include<iostream>
using namespace std;

int exponent(int m,int n){
    if (n > 0)
    {
        return m * exponent(m,n-1);
    }
    else
        return 1;
}

int pow(int m,int n){
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return pow(m*m,n/2);
    }
    else
        return m * pow(m*m,n - 1);
}

int main(int argc, char const *argv[])
{
    int x = exponent(2,4);
    int y = pow(2,4);
    printf("%d\n",x);
    printf("%d",y);
    return 0;
}
