#include<iostream>
using namespace std;

int sum(int n){
    if (n == 0){
        return 0;
    }
    else{
        return n + sum(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int x = sum(5);
    cout << x << endl;
    return 0;
}
