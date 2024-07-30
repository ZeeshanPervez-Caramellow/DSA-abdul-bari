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

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList(int val)
    {
        Node *n1 = new Node(val);
        head = n1;
        tail = n1;
    }
    void insertNodeAtTail(int val)
    {
        tail->ptr = new Node(val);
        tail = tail->ptr;
    }
    void insertNodeAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->ptr = head;
        head = newNode;
    }
    int get(int index)
    {
        Node *temp = head->ptr;
        int i = 0;
        while (temp != NULL)
        {
            if (i == index)
                return temp->data;
            i++;
            temp = temp->ptr;
        }
        return -1;
    }
    void remove(int index)
    {
        if (index == 0)
        {
            Node *toDel = head;
            head = head->ptr;
            if (head == NULL)
                tail = NULL;
            delete toDel;
            return;
        }
        Node *temp = head;
        int i = 0;
        while (temp != NULL)
        {
            if (i == index - 1)
                break;
            i++;
            temp = temp->ptr;
        }
        if (temp != nullptr && temp->ptr != nullptr)
        {
            if (temp->ptr == tail)
            {
                tail = temp;
            }
            Node *toDel = temp->ptr;
            temp->ptr = temp->ptr->ptr;
            delete toDel;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " " << endl;
            temp = temp->ptr;
        }
    }
    void insert(int index, int val)
    {
        if (index == 0)
        {
            Node *newNode = new Node(val);
            newNode->ptr = head;
            head = newNode;
            return;
        }
        Node *temp = head;
        int i = 0;
        while (temp != NULL)
        {
            if (i == index - 1)
                break;
            i++;
            temp = temp->ptr;
        }
        Node *newNode = new Node(val);
        newNode->ptr = temp->ptr;
        temp->ptr = newNode;
    }
    int sum()
    {
        Node *temp = head;
        int sum = 0;
        while (temp != NULL)
        {
            sum += temp->data;
            temp = temp->ptr;
        }
        return sum;
    }
    int count()
    {
        Node *temp = head;
        int sum = 0;
        while (temp != NULL)
        {
            sum++;
            temp = temp->ptr;
        }
        return sum;
    }
    int Max()
    {
        Node *temp = head;
        int max = INT8_MIN;
        while (temp != NULL)
        {
            if (max < temp->data)
                max = temp->data;
            temp = temp->ptr;
        }
        return max;
    }
    bool ifSorted()
    {
        Node *temp = head;
        Node *temp2 = temp->ptr;
        while (temp2->ptr != nullptr)
        {
            if (temp->data > temp2->data)
                return false;
            temp2 = temp2->ptr;
            temp = temp->ptr;
        }
        return true;
    }
    void insertAtSorted(int val)
    {
        if (val < head->data)
        {
            Node *newNode = new Node(val);
            newNode->ptr = head;
            head = newNode;
            return;
        }
        Node *temp = head;
        Node *temp2 = temp->ptr;
        while (temp2->ptr != nullptr)
        {
            if (val < temp2->data)
                break;
            temp = temp->ptr;
            temp2 = temp2->ptr;
        }
        if (temp2->data < val)
        {
            Node *newNode2 = new Node(val);
            temp2->ptr = newNode2;
            tail = newNode2;
            return;
        }
        Node *newNode = new Node(val);
        temp->ptr = newNode;
        newNode->ptr = temp2;
    }
    void reverse()
    {
        int *arr = new int[this->count()];
        Node *temp = head;
        int i = 0;
        while (temp != nullptr)
        {
            arr[i] = temp->data;
            temp = temp->ptr;
            i++;
        }
        temp = head;
        i = this->count() - 1;
        while (temp != nullptr)
        {
            temp->data = arr[i];
            temp = temp->ptr;
            i--;
        }
    }
    void reverse2()
    {
        Node *temp1, *temp2, *temp3;

        // initially assigning first pointer to head
        // second and third to null
        temp1 = head;
        temp2 = nullptr;
        temp3 = nullptr;
        while (temp1 != nullptr)
        {
            temp2 = temp1;      // keeping the value
            temp1 = temp1->ptr; // moving  first pointer ahead
            temp2->ptr = temp3; // make the second pointer point to the third one
            temp3 = temp2;      // now move the third one ahead
        }
        head = temp3;
    }
    void concatenate(LinkedList L)
    {
        Node *temp = L.head;
        while (temp != nullptr)
        {
            insertNodeAtTail(temp->data);
            temp = temp->ptr;
        }
    }
    void Merge(LinkedList L)
    {
        Node *temp1 = this->head;
        Node *temp2 = L.head;
        LinkedList mergedList(0);     // Create a dummy node
        Node *last = mergedList.head; // Last points to the last node in the merged list

        while (temp1 != nullptr && temp2 != nullptr)
        {
            if (temp1->data < temp2->data)
            {
                last->ptr = temp1;
                last = temp1;
                temp1 = temp1->ptr;
            }
            else
            {
                last->ptr = temp2;
                last = temp2;
                temp2 = temp2->ptr;
            }
        }
        if (temp1 != nullptr)
            last->ptr = temp1;
        if (temp2 != nullptr)
            last->ptr = temp2;

        // Skip the dummy node
        mergedList.head = mergedList.head->ptr;
        delete last; // Delete the dummy node

        // Replace the current list with the merged list
        this->head = mergedList.head;
        this->tail = mergedList.tail;
    }
};

int main()
{
    LinkedList list(1); // Create a LinkedList with a single node containing the value 1

    list.insertNodeAtTail(2); // Insert a node with the value 2 at the tail
    list.insertNodeAtTail(3); // Insert a node with the value 3 at the tail
    list.insertNodeAtTail(4); // Insert a node with the value 4 at the tail

    // At this point, the list should be: 1 -> 2 -> 3 -> 4

    list.insert(1, 5); // Insert a node with the value 5 at index 1

    // Now, the list should be: 1 -> 5 -> 2 -> 3 -> 4

    list.display(); // display values in a linked list
    cout << endl;
    cout << list.sum() << endl; // sum of all values in a linked list
    cout << endl;
    cout << list.count() << endl; // count number of values in a linked
    cout << endl;
    cout << list.Max() << endl; // prints the maximum element in a linked list
    cout << endl;
    cout << list.ifSorted() << endl;

    cout << endl;
    list.reverse2(); // reverse the linked list
    list.display();
    return 0;
}