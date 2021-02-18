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
            Node *listOne = head;
            while (listOne->next != NULL)
            {
                listOne = listOne->next;
            }
            listOne->next = newNode;
        }
    }

    void printList()
    {
        Node *listOne = head;
        while (listOne != NULL)
        {
            cout << listOne->data << "->";
            listOne = listOne->next;
        }
        cout << "\n";
    }
};

Node *addLinkList(Node *a, Node *b)
{
    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;

    Node copy;
    Node *ans = &copy, *listOne = a, *listTwo = b;
    int carry = 0, sum = 0;
    while (listOne != NULL || listTwo != NULL)
    {
        sum = carry + (listOne != NULL ? listOne->data : 0) + (listTwo != NULL ? listTwo->data : 0);
        carry = sum / 10;
        sum %= 10;
        ans->next = new Node(sum);
        ans = ans->next;

        if (listOne != NULL)
        {
            listOne = listOne->next;
        }

        if (listTwo != NULL)
        {
            listTwo = listTwo->next;
        }
    }

    if (carry > 0)
    {
        ans->next = new Node(carry);
    }

    return copy.next;
}

int main()
{
    SinglyLinkedList a, b;
    for (int i = 1; i <= 9; i++)
    {
        a.insertAtEnd(i);
        b.insertAtEnd(i);
      
    }
    SinglyLinkedList ans;
    ans.head = addLinkList(a.head, b.head);
    ans.printList();
}