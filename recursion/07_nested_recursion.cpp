#include<iostream>

using namespace std;

int fun(int n){
    if (n > 100)
    {
        return n - 10 ;
    }
    else
    {
        return fun(fun(n + 11));
    }
    
    
}

int main(int argc, char const *argv[])
{
    int x = 95;
    int y = fun(95);
    cout << "fun value of n is :" << y << endl;
    return 0;
}
