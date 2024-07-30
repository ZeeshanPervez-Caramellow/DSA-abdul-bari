#include<iostream>

using namespace std;

//here control flows from one function to another
//one after another

void funA(int n);

void funB(int n){
    if(n > 1){
    cout << n << endl;
    funA(n/2);
    }
}

void funA(int n){
    if(n > 0){
    cout << n << endl;
    funB(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int x = 20;
    funA(x);
    return 0;
}
