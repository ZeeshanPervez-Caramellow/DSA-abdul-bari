#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue <int> x; // queue is a FIFO data structure
    x.push(1); // adds an element to the end of the queue
    x.push(2); // adds an element to the end of the queue
    x.push(3); // adds an element to the end of the queue
    x.push(4); // adds an element to the end of the queue
    x.push(5); // adds an element to the end of the queue
    cout << x.front() << endl; // prints the front element of the queue
    x.pop(); // removes the front element of the queue
    cout << x.front() << endl; // prints the front element of the queue
    return 0;
}