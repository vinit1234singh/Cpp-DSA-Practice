#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *left,*right;
		Node(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};

Node* BuildBST(class Node *root, int val){
	
	if(root == NULL){
		return new Node(val);
	}
	if(val<root->data){
		root->left = BuildBST(root->left, val);
	}
	else{
		root->right = BuildBST(root->right, val);	
	}
	return root;
}


Node* Search(class Node *root, int key){
	
	if(root == NULL || root->data == key){
		return root;
	}
	if(root->data<key){
		return Search(root->right, key);
	}
	else{
		return Search(root->left, key);
	}
}

void inorder(class Node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	
	Node *root = NULL;
	root = BuildBST(root, 1);
	BuildBST(root, 2);
	BuildBST(root, 3);	
	BuildBST(root, 4);
	BuildBST(root, 5);
	BuildBST(root, 7);
	BuildBST(root, 6);
	inorder(root);
}
