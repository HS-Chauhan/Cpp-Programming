#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data: "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //Non empty list
        Node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }

        //element found -> curr is representing element walla node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

void print(Node* &tail){
    Node* temp = tail;

    //Empty List
    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    do{
        cout<<tail -> data<<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        //non-empty

        //assuming that value is present in list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = prev -> next;
        }

        // Linked list with only 1 node
        if(curr == prev){
            tail = NULL;
        }

        // Linked list with more than 1 node
        prev -> next = curr -> next;
        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}

int main(){

    Node* tail = NULL;

    //empty list insertion
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,69);
    print(tail);

    insertNode(tail,7,11);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    deleteNode(tail,69);
    print(tail);

    deleteNode(tail,3);
    print(tail);



    return 0;
}
