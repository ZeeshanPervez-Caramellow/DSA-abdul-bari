#include<iostream>
using namespace std;
int factorial(int n){
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
        return 1;
    
}

int main(int argc, char const *argv[])
{
    int x = factorial(4);
    cout << x << endl;
    return 0;
}
