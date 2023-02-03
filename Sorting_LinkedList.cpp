#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};

class LinkedlistIS
{

public:
    Node *head;
    Node *sorted;

    void push(int val)
    {
        Node *newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }

    void insertionSort(Node *headref)
    {
        sorted = NULL;
        Node *current = headref;
        while (current != NULL)
        {
            Node *next = current->next;
            sortedInsert(current);
            current = next;
        }
        head = sorted;
    }

    void sortedInsert(Node *newnode)
    {
        
        if (sorted == NULL || sorted->val >= newnode->val)
        {
            newnode->next = sorted;
            sorted = newnode;
        }
        else
        {
            Node *current = sorted;
            while (current->next != NULL && current->next->val < newnode->val)
            {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
    }

    void printlist(Node *head)
    {
        while (head != NULL)
        {
            cout << head->val << " ";
            head = head->next;
        }
    }
};
int main()
{
    LinkedlistIS list;
    list.head = NULL;
    list.push(42);
    list.push(-6);
    list.push(-1);
    list.push(300);
    list.push(0);
    cout << "Linked List before sorting" << endl;
    list.printlist(list.head);
    cout << endl;
    list.insertionSort(list.head);
    cout << "Linked List After sorting" << endl;
    list.printlist(list.head);


    return 0;
}
