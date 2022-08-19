#include <iostream>

class node
{

private:
	void insertHelper(node* root, const int& val)
	{
		if (root == nullptr)
		{
			root = new node();
			root->data = val;
			std::cout << root->data;
		}
		else if (root->data > val)
		{
			insertHelper(root->left, val);
			std::cout << root->data;
		}
		else
		{
			insertHelper(root->right, val);
		}
	}
public:
	int data;
	node* left;
	node* right;
	node* root = nullptr;
	node()
	{
		//data = val;
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