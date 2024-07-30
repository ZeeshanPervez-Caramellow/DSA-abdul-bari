#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->data = val;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class doublycircularlinkedlist
{
public:
    Node *head;
    Node *tail;
    doublycircularlinkedlist(int val){
        Node *newNode = new Node(val);
        this ->head = newNode;
        this ->tail = newNode;
    }
    void insertAtHead(int val){
        Node * newNode = new Node(val);
        newNode->next = head;
        tail->next = newNode;
        head->prev = newNode;
        newNode->prev = tail;
        head = newNode;
    }
    void insertAtTail(int val){
        Node * newNode = new Node(val);
        newNode->next = head;
        tail->next = newNode;
        head->prev = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
};

int main(){
           
    return 0;
}