#include<iostream>
#include<cmath>
using namespace std;

float factorial(int n){
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else if(n == 0)
        return 1;
}


float Taylor(int x,int n){
    if (n >= 0)
    {
        return pow(x,n)/factorial(n) + Taylor(x,n - 1);
    }
    else
        return 0;
}

float e(int x,int n){
    static float p = 1,f = 1,r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        
        r = e(x,n - 1);//always remember that this  
        p = p * x;     //function plays out before ahead operations
        f = f * n;
        return r + (p/f);
    }
    
    
}

int main(int argc, char const *argv[])
{
    float a = e(1,4);
    printf("%f",a);
    return 0;
}
