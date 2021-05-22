#include "tree.h"



tree::tree(){

}
tree::~tree(){
	
}
void tree::preorderTraversal(Node* node){
	if(node == nullptr)
		return;
	cout << node->data << "->";
	preorderTraversal(node->left);
	preorderTraversal(node->right);
}
void tree::postorderTraversal(Node* node){
	if (node == nullptr)
		return;

	postorderTraversal(node->left);
	postorderTraversal(node->right);
	cout << node->data << "->";
}
void tree::inorderTraversal(Node* node){
	if (node == nullptr)
		return;

	inorderTraversal(node->left);
	cout << node->data << "->";
	inorderTraversal(node->right);
}


// Tree traversal in C++


fullBinTree::fullBinTree(){
	
}
fullBinTree::~fullBinTree(){
	
}
bool fullBinTree::isFullBinaryTree(Node* node){
	if(node == NULL)
		return true;
	if(node->left == NULL  && node->right == NULL)
		return true;
	
	if(node->left && node->right)
		return (isFullBinaryTree(node->left)&&isFullBinaryTree(node->right));
	
	return false;
}
void fullBinTree::preorderTraversal(Node* node){
	if(node == nullptr)
		return;
	cout << node->data << "->";
	preorderTraversal(node->left);
	preorderTraversal(node->right);
}
void fullBinTree::postorderTraversal(Node* node){
	if (node == nullptr)
		return;

	postorderTraversal(node->left);
	postorderTraversal(node->right);
	cout << node->data << "->";
}
void fullBinTree::inorderTraversal(Node* node){
	if (node == nullptr)
		return;

	inorderTraversal(node->left);
	cout << node->data << "->";
	inorderTraversal(node->right);
}
