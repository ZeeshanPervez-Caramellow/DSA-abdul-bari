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
class DLinkedList
{
public:
    Node *head;
    Node *tail;
    DLinkedList(int val)
    {
        Node *newNode = new Node(val);
        head = newNode;
        tail = newNode;
    }
    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void insert(int val, int index)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        if (index == 0)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        for (int i = 0; temp != nullptr && i < index - 1; i++)
            temp = temp->next;
        if (temp != nullptr)
        {
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != nullptr)
            {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " " << endl;
            temp = temp->next;
        }
    }
    void deleteElement(int index)
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        if (index == 0)
        {
            head = head->next;
            if (head != nullptr)
            {
                head->prev = nullptr;
            }
            delete temp;
        }
        else
        {
            for (int i = 0; i < index - 1 && temp != nullptr; i++)
                temp = temp->next;
            if (temp != nullptr && temp->next != nullptr)
            {
                Node *nodeToDelete = temp->next;
                temp->next = nodeToDelete->next;
                if (nodeToDelete->next != nullptr)
                {
                    nodeToDelete->next->prev = temp;
                }
                else
                    tail = temp;
                delete nodeToDelete;
            }
        }
    }
};
int main()
{
    DLinkedList dll(5); // Initialize a doubly linked list with a node of value 5

    dll.insertAtTail(10); // Insert 10 at the tail
    dll.insertAtHead(0);  // Insert 0 at the head
    dll.insert(7, 2);     // Insert 7 at index 2

    dll.display(); // Display the list. Expected output: 0 5 7 10

    dll.deleteElement(2); // Delete the element at index 2

    dll.display(); // Display the list. Expected output: 0 5 10

    dll.insertAtHead(15); // Insert 15 at the head

    dll.display(); // Display the list. Expected output: 15 0 5 10

    dll.deleteElement(0); // Delete the head

    dll.display(); // Display the list. Expected output: 0 5 10

    dll.deleteElement(2); // Delete the tail

    dll.display(); // Display the list. Expected output: 0 5

    return 0;
}