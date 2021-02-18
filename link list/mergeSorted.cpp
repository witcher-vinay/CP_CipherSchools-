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

int printLinkList(Node* head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
    return 0;
}
int getSize(Node *head)
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

Node* meargeLinklist(Node* a,Node* b){
    if(b == NULL)
    {
        return a;
    }
    else if(b == NULL)
    {
        return a;
    }
    else{
        Node *firstNode,*secoundNode;
        while(a != NULL && b != NULL){
            firstNode = a->next;
            secoundNode = b->next;
            a->next = b;
            a = firstNode ;
            b->next = a;
            b= secoundNode;
        }
    }
    return a;
}

int main()
{
    Node *a = NULL , *b = NULL ;
    a = new Node(1);
    a->next = new Node(2);
    a->next->next = new Node(3);
    b = new Node(1);
    b->next = new Node(2);
    b->next->next = new Node(3);
    Node* ans = merge(a,b);
}