#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    //Constructor
    node(int d){
        this -> data = d;
        this -> left =NULL;
        this -> right=NULL;
    }

};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl; 
    int data;
    cin >> data;
    root = new node(data); 

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data to be inserted in left child of: "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter data to be inserted in right child of: "<<data<<endl;
    root -> right = buildTree(root -> right);
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        cout<< temp -> data<<" ";
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


int main(){

    node* root = NULL;

    //creating a tree
    root = buildTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order 
    levelOrderTraversal(root);
    


    return 0;
}
