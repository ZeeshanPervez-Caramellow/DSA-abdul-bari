#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> x; // deque is a dynamic array that can be accessed from both ends
    x.push_back(1);  // adds an element to the end of the deque
    x.push_front(2);   // adds an element to the front of the deque
    x.push_back(3);    //   adds an element to the end of the deque

    cout << x.front() << " "; // prints 2 1 3
    cout << x.at(1) << " "; // prints 2 1 3
    cout << x.back() << endl; // prints 2 1 3

    x.pop_back(); // removes the last element of the deque
    x.pop_front(); // removes the first element of the deque

    cout << x.empty() << endl; // prints 1 if the deque is empty

    cout << x.front() << endl; // prints the first element of the deque
    cout << x.back() << endl;  // prints the last element of the deque

    x.erase(x.begin(),x.begin()+1); // removes the elements from the start 

    for (int i = 0; i < x.size(); i++) // prints the elements of the deque
    {
        cout << x[i] << " ";
;    }
    
    
    return 0;
}