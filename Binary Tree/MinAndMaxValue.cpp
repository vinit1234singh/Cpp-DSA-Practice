#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *left;
		Node *right;
		Node(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};


Node* minval(class Node *root){
	
	Node *temp = root;
	while(temp!=NULL){
		temp = temp->left;
	}
	return temp;
	//cout<<temp;
}


Node* insertBST(class Node *root, int val){
	if(root == NULL){
		return new Node(val);
	}
	if(root->data > val){
		root->left = insertBST(root->left, val);
	}
	else{
		root->right = insertBST(root->right, val);
	}
	return root;
}

//Node* minval(class Node *root){
//	
//	Node *temp = root;
//	while(temp!=NULL){
//		temp = temp->left;
//	}
//	return temp;
//	cout<<temp;
//}

void inorder(class Node *root)
{
	
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	
	
	Node *root = NULL;
	root = insertBST(root, 1);
	insertBST(root, 2);
	insertBST(root, 3);
	insertBST(root, 4);
	insertBST(root, 5);
	insertBST(root, 6);
	insertBST(root, 7);
	insertBST(root, 8);
	inorder(root);
	cout<<minval(root)->data;
}
