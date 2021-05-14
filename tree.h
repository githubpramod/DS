#ifndef __SORT_DEF
#define __SORT_DEF


#include <iostream>

using namespace std;

class Node {
	public:
			int data;
			Node *left, *right;
			Node(int data) {
				this->data = data;
				left = right = NULL;
			}
};
class tree{
	private:
			Node* node; 
	public:
			tree();
			~tree();
			void preorderTraversal(Node* node);
			void postorderTraversal(Node* node);
			void inorderTraversal(Node* node);
};


#endif