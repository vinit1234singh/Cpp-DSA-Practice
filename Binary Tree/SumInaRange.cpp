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

void inorder(class Node* root, int l, int r){
	int sum = 0;
	if(root == NULL){
		return;
		
	}
	inorder(root->left, l, r);
	if(root->data>=l && root->data<=r){
		sum = sum + root->data;
	}
	inorder(root->right, l, r);
	cout<<sum<<endl;
}

int main(){
	
	int l = 3;
	int r = 7;
	Node *root = NULL;
	root = BuildBST(root, 1);
	BuildBST(root, 2);
	BuildBST(root, 3);	
	BuildBST(root, 4);
	BuildBST(root, 5);
	BuildBST(root, 7);
	BuildBST(root, 6);
	inorder(root, l, r);
	
}
