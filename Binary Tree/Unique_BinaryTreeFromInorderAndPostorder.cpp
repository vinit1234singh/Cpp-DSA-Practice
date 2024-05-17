#include<bits/stdc++.h>
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

Node *maketree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    Node *curr = new Node(val);

    if (start == end)
    {
        return curr;
    }
    int pos = search(inorder, start, end, val);
    curr->right = maketree(postorder, inorder, pos+1, end);
    curr->left = maketree(postorder, inorder, start, pos-1);

    return curr;
}
int main()
{
	int postorder[] = {4,2,5,3,1};
	int inorder[] = {4,2,1,5,3};
		
}
