#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,4> arr = {1,2,3,4};
    cout << arr.at(2) << endl;
    cout << arr.size() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout << arr.empty() << endl;
    return 0;
}