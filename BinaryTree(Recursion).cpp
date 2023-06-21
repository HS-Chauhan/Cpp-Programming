#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
using namespace std; 

struct Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int value){
        this -> data = value;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(){

    int data;
    cout << "Enter Data for Root Node(or -1 for null) : " << endl;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter data of Left Node of : " << data << endl;
    root -> left = buildTree();
    cout << "Enter data of Right Node of : " << data << endl;
    root -> right = buildTree();
    return root;

}

int main(){

    // creating a tree
    Node* root = buildTree();



    //cleaning up memory
    delete root;
    


    return 0;
}
