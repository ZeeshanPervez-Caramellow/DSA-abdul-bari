#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int fib2(int n){
    int t1 = 0,t2 = 1,nxt;
    if(n == 0) return t1;
    if(n == 1) return t2;
    for (int i = 2; i <= n; i++)
    {
        nxt = t1 + t2;
        t1 = t2;
        t2 = nxt;
    }
    return nxt;
}
int arr[100];
int fib3(int n){
    if(n == 0){
        arr[0] = n; 
        return 0;
    }
    if(n == 1){
        arr[1] = n; 
        return 1;
    }
}