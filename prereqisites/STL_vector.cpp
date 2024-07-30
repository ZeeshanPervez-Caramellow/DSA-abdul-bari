#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4}; // vector is a dynamic array    
    cout << arr.at(2) << endl;   // prints the value at the index 2
    cout << arr.size() << endl;  // prints the size of the vector
    cout << arr.front() << endl; // prints the first element of the vector
    cout << arr.back() << endl;  // prints the last element of the vector
    cout << arr.empty() << endl; // prints 0 if the vector is not empty
    cout << arr.capacity() << endl; // prints the capacity of the vector
    cout << arr.max_size() << endl; // prints the maximum size of the vector
    arr.pop_back();  // removes the last element of the vector
    arr.push_back(5);  // adds an element to the end of the vector 
    arr.clear();  // removes all the elements of the vector but still the capacity remains the same and size is zero

    vector<int> x(4,1); // creates a vector of size 4 and all elements are 1
    for(int i = 0; i < x.size(); i++){
        cout << x[i] << " ";
    }
    cout << endl;

    vector<int> y(4); // creates a vector of size 4 and all elements are 0
    for(int i = 0; i < y.size(); i++){
        cout << y[i] << " ";
    }

    vector<int> z(x); // creates a vector z and copies all the elements of x into z
    for(int i = 0; i < z.size(); i++){
        cout << z[i] << " ";
    }

    vector<int> a; // creates an empty vector
    return 0;
    
}