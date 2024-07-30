#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list <int> x; // list is a doubly linked list
    x.push_back(1); // adds an element to the end of the list
    x.push_front(2); // adds an element to the front of the list
    x.push_back(3); // adds an element to the end of the list   
    x.push_back(4); // adds an element to the end of the list
    for(int i:x){
        cout << i << " ";    
    }
    x.erase(x.begin()); // removes the first element of the list
    cout << endl;
    for(int i:x){
        cout << i << " ";
    }
    cout << endl;
    x.pop_front(); // removes the first element of the list
    for(int i : x){
        cout << i << " ";
    }
    cout << endl;
    x.pop_back(); // removes the last element of the list
    for(int i : x){
        cout << i << " ";
    }
    list <int> new_list(x); // creates a new list and copies all the elements of x into it
    list <int> new2(5,100); // creates a list of size 5 and all elements are 100
    return 0;
}