#include<iostream>
using namespace std;

float result = 1;

float Taylor(float x , float n){
    if (n == 0)
    {
        return result;
    }
    result = 1 + (x/n)*result;
    return Taylor(x,n-1);
}

int main(int argc, char const *argv[])
{
    float x = Taylor(1,4);
    cout << x << endl;
    return 0;
}
