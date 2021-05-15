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



