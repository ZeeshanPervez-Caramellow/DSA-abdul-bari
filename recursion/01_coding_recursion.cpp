#include<iostream>
using namespace std;

void fun1(int n){
    if (n > 0){
        printf("%d ",n);
        fun1(n - 1);
    }
}

void fun2(int n){
    if (n > 0){
        fun2(n - 1);
        printf("%d ",n);
    }   
}

int main(int argc, char const *argv[])
{
    int x = 5;
    fun2(x);
    return 0;
}
