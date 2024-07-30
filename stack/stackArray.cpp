#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class stackAdt
{
    public:
        vector<int> arr;
        int top;
        stackAdt(){
            this->top = -1;
        }
        void push(int val){
            this->arr.push_back(val);
            top++;
        }
        void pop(){
            if(top == -1)return;
            top--;
        }
        int peek(int index){
            int x = this->top-index + 1;
            if(x < 0){cout << "overflow" << endl; return 0;}
            return this->arr[x];
        }
        void display(){
            int temp = top;
            for (int i = temp; i >= 0 ; i--)
            {
                cout << arr [i] << " ";
            }
            cout << endl;
        }
};
int main() {
    stackAdt s;

    // Test push
    s.push(10);
    s.push(20);
    s.push(30);

    //display
    s.display();

    // Test peek
    cout << "Element at index 1 from top: " << s.peek(1) << endl; // Should print 30
    cout << "Element at index 2 from top: " << s.peek(2) << endl; // Should print 20
    cout << "Element at index 3 from top: " << s.peek(3) << endl; // Should print 10

    // Test pop
    s.pop();
    cout << "Element at index 0 from top after pop: " << s.peek(1) << endl; // Should print 20

    // Test overflow
    cout << "Element at index 10 from top: " << s.peek(10) << endl; // Should print "overflow" and return 0

    return 0;
}