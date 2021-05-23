#include "tree.h"



tree::tree(){

}
tree::~tree(){
	
}

void tree::inorderTraversal(Node* node){
	if (node == nullptr)
		return;

	inorderTraversal(node->left);
	cout << node->data << "->";
	inorderTraversal(node->right);
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


// Tree traversal in C++
/*
1.binary tree catalon number = T(n) = 2nCn/(n+1)
2. T(n) = SUMi to n {T(i-1)*T(n-i)}
for lavel
t(n)=(2nCn/(n+1))*n!
min node n =h+1//h=height
max node n = (2to the powerh+1)-1

array reperentation:
element at index - i
lchild                  -2*i
rchild                 - 2*i+1
paranet = floor(i/2 // filled by lebebel by lebel)
linked reperentation binary tree:
use double linked reperentation
struct{
	Node* lchild;
	int data;
	Node* rchild;
}
bin tree = height having maximum numbers of node;
n = (2 to the power h+1)-1

   A
 B  C
 pre: A, B , C //visit node, preorder(left), preorder(right)
 In:   B  A   C // inorder(left), visit node, inorder(right)     
 Post:B A C  // post(left), post(right), visit(node)
 level: A B C // level by level
*/

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
