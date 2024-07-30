#include <iostream>
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

class circularlinkedlists
{
public:
    Node * head;
    Node * tail;
    circularlinkedlists(int val)
    {
        Node * newNode = new Node(val);
        this->head = newNode;
        this->tail = newNode;
        this->tail->ptr = this-> head;
    }
    void insertAtHead(int val){
        Node * newNode = new Node(val);
        newNode->ptr = head;
        head = newNode;
        tail->ptr = head;
    }
    void insertAtTail(int val){
        Node * newNode = new Node(val);
        this->tail->ptr = newNode;
        newNode->ptr = head;
    }
    void insert(int val,int index){
        Node * temp = head;
        Node * newNode = new Node(val);
        if(index == 0){
            this->tail->ptr = newNode;
            newNode->ptr = this->head;
        }
        else{
            for(int i = 0;i < index - 1 && temp->ptr != head;i++)temp = temp->ptr;
            if(temp->ptr != head){
                newNode->ptr = temp->ptr;
                temp->ptr = newNode;
            }
            else{
                newNode->ptr = this->head;
                this->tail->ptr = newNode;
                this->tail = newNode;
            }
        }
    }
    void deleteElement(int index){
        Node * temp = head;
        if(index == 0){
            this->tail->ptr = head->ptr;
            Node * todelete = head;
            head = tail->ptr;
            delete todelete;
        }
        else{
            if(temp->ptr != head){
                Node *todelete = temp->ptr;
                temp->ptr = temp->ptr->ptr;
                delete todelete;
            }
            else{
                cout << "invalid ";
            }
        }
    }
};

int main(){
           
    return 0;
}