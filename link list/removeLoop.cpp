#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        Node(0);
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        this->head = NULL;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }

    void printList()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "\n";
    }

    int getSize()
    {
        Node *ptr = head;
        int size = 0;
        while (ptr != NULL)
        {
            size++;
            ptr = ptr->next;
        }
        return size;
    }

    bool detectLoop()
    {
        if (head==NULL||head->next==NULL){
            return false;
        }
        Node *slowPointer = head, *fastPointer = head;
        while (slowPointer != NULL && fastPointer != NULL && fastPointer->next != NULL){
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
            if (slowPointer == fastPointer)
                return true;
        }
        return false;
    }

    void removeLoop() {
        if (head == NULL || head->next == NULL){
            return;
        }
        Node *slowPointer = head, *fastPointer = head;
        bool loopPresent = false;
        while (slowPointer != NULL && fastPointer != NULL && fastPointer->next != NULL){
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
            if (slowPointer == fastPointer){
                loopPresent = true;
                break;
            }
        }
        if (loopPresent){
            slowPointer = head;
            if (slowPointer == fastPointer){
                while (fastPointer->next != slowPointer){
                    fastPointer = fastPointer->next;
                }
            }
            else{
                while (slowPointer->next != fastPointer->next){
                    slowPointer = slowPointer->next;
                    fastPointer = fastPointer->next;
                }
            }
            fastPointer->next = NULL;
        }
    }
};

int main()
{
    SinglyLinkedList *sll = new SinglyLinkedList();
    sll->head = new Node(1);
    sll->head->next = new Node(2);
    sll->head->next->next = new Node(3);
    sll->head->next->next->next = new Node(4);
    sll->head->next->next->next->next = new Node(5);
    cout << sll->detectLoop() << "\n";
    sll->head->next->next->next->next->next = sll->head;
    cout << sll->detectLoop() << "\n";
    sll->removeLoop();
    cout << sll->detectLoop() << "\n";
    sll->head->next->next->next->next->next = sll->head->next;
    cout << sll->detectLoop() << "\n";
    sll->removeLoop();
    cout << sll->detectLoop() << "\n";
}