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

void printList(Node * head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "\n";
}

int getSize(Node * head)
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

Node * rearrange(Node * head) {
    if (head == NULL || head->next == NULL) 
        return head;
    Node *ptr = head, *next = NULL, *prev = NULL;
    Node dummy;
    Node *even = &dummy;
    while (ptr != NULL) {
        prev = ptr;
        next = ptr->next;
        ptr->next = next->next;
        even->next = next;
        even = even->next;
        ptr = ptr->next;
    }
    prev->next = dummy.next;
    return head;    
}

int main()
{
    Node *a = NULL  ;
    a = new Node(1);
    a->next = new Node(2);
    a->next->next = new Node(3);
    a->next->next->next = new Node(3);
    a->next->next->next->next = new Node(4);
    a->next->next->next->next->next = new Node(4);
    Node *ans=rearrange(a);

}
