#ifndef __SORT_DEF
#define __SORT_DEF


#include <iostream>

using namespace std;

class bstNode {
	public:
			int data;
			bstNode *left, *right;
};
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

// full binary  tree have at most two children
//every parent node/internal node has either two or no children

//Balanced Binary Tree It is a type of binary tree in which the 
//difference between the height of the left and the right subtree for each node is either 0 or 1.


class fullBinTree{
	private:
			Node* node; 
	public:
			fullBinTree();
			~fullBinTree();
			bool isFullBinaryTree(Node* node);
			void preorderTraversal(Node* node);
			void postorderTraversal(Node* node);
			void inorderTraversal(Node* node);

};

/* 

Binary Search Tree 
*/
class binarySearchTree{
	private:
			bstNode* node; 
	public:
			binarySearchTree();
			~binarySearchTree();
			bstNode* insert(bstNode *node, int val);
			bstNode* NodeValue(bstNode *node);
			bstNode* deleteNode(bstNode *root, int val);
			void inorderTraversal(bstNode* node);

};


#endif