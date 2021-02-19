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
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl ;
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

    Node *reverse(Node *head, int K)  {
        if (head == NULL || head->next == NULL)
            return head;
        Node *curr = head, *next = NULL, *prev = NULL;
        int k = 0;
        while (curr != NULL && k < K){
            k++;
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if (next != NULL)
            head->next = reverse(next, K);
        return prev;
    }

    void reverse(int K) {
        this->head = reverse(head, K);
    }
};

int main()
{
    SinglyLinkedList result;
    result.printList();
    for (int i = 1; i <= 10; i++)
    {
        result.insertAtBeginning(i);
    }
    result.reverse(3);
    result.printList();
}