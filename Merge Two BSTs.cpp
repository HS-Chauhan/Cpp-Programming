#include <bits/stdc++.h>
using namespace std;


class node {
public:
	int data;
	node* left;
	node* right;
};


class snode {
public:
	node* t;
	snode* next;
};

void push(snode** s, node* k)
{
	snode* tmp = new snode();


	tmp->t = k;
	tmp->next = *s;
	(*s) = tmp;
}

node* pop(snode** s)
{
	node* t;
	snode* st;
	st = *s;
	(*s) = (*s)->next;
	t = st->t;
	free(st);
	return t;

int isEmpty(snode* s)
{
	if (s == NULL)
		return 1;

	return 0;
}



node* newNode(int data)
{
	node* temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


void inorder(node* root)
{
	if (root != NULL) {
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}


void merge(node* root1, node* root2)
{

	snode* s1 = NULL;


	node* current1 = root1;


	snode* s2 = NULL;

	node* current2 = root2;

	
	
	if (root1 == NULL) {
		inorder(root2);
		return;
	}

	if (root2 == NULL) {
		inorder(root1);
		return;
	}


	while (current1 != NULL || !isEmpty(s1)
		|| current2 != NULL || !isEmpty(s2)) {
		
		if (current1 != NULL || current2 != NULL) {
	
			if (current1 != NULL) {
				push(&s1, current1);
				current1 = current1->left;
			}
			if (current2 != NULL) {
				push(&s2, current2);
				current2 = current2->left;
			}
		}
		else {

			if (isEmpty(s1)) {
				while (!isEmpty(s2)) {
					current2 = pop(&s2);
					current2->left = NULL;
					inorder(current2);
				}
				return;
			}
			if (isEmpty(s2)) {
				while (!isEmpty(s1)) {
					current1 = pop(&s1);
					current1->left = NULL;
					inorder(current1);
				}
				return;
			}

		
			current1 = pop(&s1);
			current2 = pop(&s2);


			if (current1->data < current2->data) {
				cout << current1->data << " ";
				current1 = current1->right;
				push(&s2, current2);
				current2 = NULL;
			}
			else {
				cout << current2->data << " ";
				current2 = current2->right;
				push(&s1, current1);
				current1 = NULL;
			}
		}
	}
}

int main()
{
	node *root1 = NULL, *root2 = NULL;

	
	root1 = newNode(3);
	root1->left = newNode(1);
	root1->right = newNode(5);

	
	root2 = newNode(4);
	root2->left = newNode(2);
	root2->right = newNode(6);


	merge(root1, root2);

	return 0;
}

