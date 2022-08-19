#include <iostream>

class node
{

private:
	node* left;
	node* right;
	node* root = nullptr;
	int data;
	void insertHelper(node* root, const int& val)
	{
		if (root == nullptr)
		{
			root = new node();
			root->data = val;
		}
		else if (root->data > val)
		{
			insertHelper(root->left, val);
		}
		else
		{
			insertHelper(root->right, val);
		}
	}
public:
	
	node()
	{
		left = nullptr;
		right = nullptr;
	}

	void insert(const int& val)
	{
		insertHelper(root,val);
	}
	

};

int main() {

	node A;
	A.insert(34);
	A.insert(10);
	
}