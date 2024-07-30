#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <int> x ; // stack is a LIFO data structure
    x.push(1); // adds an element to the top of the stack
    x.push(2); // adds an element to the top of the stack
    x.push(3); // adds an element to the top of the stack
    x.push(4); // adds an element to the top of the stack
    cout << x.top() << endl; // prints the top element of the stack
    x.pop(); // removes the top element of the stack
    return 0;
}