#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *ptr;
    Node(int val)
    {
        this->data = val;
        this->ptr = 0;
    }
};

class Stack
{
    public:
        Node * top;
        Node * head;
        Stack(){
            head = new Node(0);
            top = head;
        }
        void push(int val){
            if(head->data == 0)head->data= val;
            else{
                Node * newNode = new Node(val);
                top = newNode;
                newNode->ptr = head;
            }
        }
        void pop(){
            if(head->data == 0)cout << "empty stack";
            else{
                Node * todel = top;
                top = top->ptr;
                delete todel;
            }
        }
        void isEmpty(){
            if(head->data == 0) cout << "empty stack";
            else cout << "not empty";
        }

};

// Test case for the Stack class
int main() {
    Stack myStack;

    // Test isEmpty on an empty stack
    cout << "Testing isEmpty on an empty stack: ";
    myStack.isEmpty(); // Expected output: "empty stack"

    // Test push and pop functionality
    cout << "\nPushing values 10, 20, 30 onto the stack.\n";
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Test isEmpty on a non-empty stack
    cout << "Testing isEmpty on a non-empty stack: ";
    myStack.isEmpty(); // Expected output: No output, as the stack is not empty

    // Pop values from the stack
    cout << "\nPopping values from the stack: ";
    myStack.pop(); // Expected to pop 30
    myStack.pop(); // Expected to pop 20
    myStack.pop(); // Expected to pop 10

    // Test isEmpty after popping all elements
    cout << "\nTesting isEmpty after popping all elements: ";
    myStack.isEmpty(); // Expected output: "empty stack"

    return 0;
}