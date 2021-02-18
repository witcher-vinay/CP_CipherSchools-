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

   

};
    bool isPalindrom(Node *head1 , Node *head2)
    {
        bool ans =true;
        while(head1 != NULL)
        {
            if(head1->data == head2 -> data)
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
       
    }
int main()
{
    SinglyLinkedList result , reverse;
    for(int i=0 ; i < 5 ; i++ )
    {
        int test;
        cin >> test ;
        result.insertAtEnd(test);
        reverse.insertAtBeginning(test);

    }    
    bool ans = isPalindrom(result.head,reverse.head);
    if(ans) cout<< "YES"<< endl;
    else cout<< "NO" <<endl; 
}