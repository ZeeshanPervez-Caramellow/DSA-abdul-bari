#include<iostream>
using namespace std;
static int x = 0;
int fun(int n){
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
//always keep in mind flow of operations during runtime and return time
int main(int argc, char const *argv[])
{
    int a = 3;
    cout << fun(a) << endl;
    return 0;
}
