
#include <bits/stdc++.h>
using namespace std;


struct node {
	int data;
	struct node* left;
	struct node* right;
};


int isSumProperty(struct node* node)
{

	int sum = 0;


	if (node == NULL
		|| (node->left == NULL && node->right == NULL))
		return 1;
	else {

		if (node->left != NULL)
			sum += node->left->data;

	
		if (node->right != NULL)
			sum += node->right->data;

	
		return ((node->data == sum)
				&& isSumProperty(node->left)
				&& isSumProperty(node->right));
	}
}


struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}


int main()
{
	struct node* root = newNode(10);
	root->left = newNode(8);
	root->right = newNode(2);
	root->left->left = newNode(3);
	root->left->right = newNode(5);
	root->right->right = newNode(2);

	// Function call
	if (isSumProperty(root))
		cout << "The given tree satisfies "
			<< "the children sum property ";
	else
		cout << "The given tree does not satisfy "
			<< "the children sum property ";

	getchar();
	return 0;
}

