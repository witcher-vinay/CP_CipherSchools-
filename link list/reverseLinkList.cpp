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
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl ;
    }




    void reverseLinkedList()
    {
        if (head == NULL || head->next == NULL)
            return;
        Node *curr = head, *next = NULL, *prev = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main()
{
    SinglyLinkedList result;
        result.insertAtEnd(1);
        result.insertAtEnd(2);
        result.insertAtEnd(3);
        result.insertAtEnd(4);
        result.insertAtEnd(5);
        result.reverseLinkedList();
        result.printList();
}