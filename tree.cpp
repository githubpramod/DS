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

/* 
Binary search tree
                              30
					15              50
				10     20   40       60
				dont have duplicate, means no duplicate
drawbach: height can be vary for same number of value if change the order to insert the value;

 */
 
 binarySearchTree::binarySearchTree(){
	 
 }
binarySearchTree::~binarySearchTree(){
	
}
bstNode* binarySearchTree::insert(bstNode *node, int val){
	if(node == nullptr){
		bstNode *temp = new bstNode{};
		temp->data = val;
		temp->left = temp->right = nullptr;
		return temp;
	}
	if(val < node->data){
		node->left = insert(node->left, val);
	}else{
		node->right = insert(node->right, val);
	}
	
	return node;
}

bstNode* binarySearchTree::NodeValue(bstNode *node){
	bstNode *curr = node;
	while(curr && curr->left != nullptr)
		curr = curr->left;
	
	return curr;
}
bstNode* binarySearchTree::deleteNode(bstNode *root, int val){
	if(root == nullptr)
		return root;
	
	if(val < root->data){
		root->left = deleteNode(root->left, val);
	}else if(val > root->data){
		root->right = deleteNode(root->right, val);
	}else{
		if(root->left == nullptr){
			bstNode *temp = root->right;
			delete root;
			return temp;
		}else if (root->right == nullptr){
			bstNode *temp = root->left;
			delete root;
			return temp;
		}
		
		bstNode *temp = NodeValue(root->right);
		root->data = temp->data;
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}
void binarySearchTree::inorderTraversal(bstNode* node){
	if (node == nullptr)
		return;

	inorderTraversal(node->left);
	cout << node->data << "->";
	inorderTraversal(node->right);
}
 
 
 /* 
AVL
AVL control  the height so called height balened binary tree
balance factor = height of left subtree - height of right subtree
bf = hl - hr={-1,0,1}
bf = <=1 then balanced
bf =>1 imbalanced
 */

 /*
2 3 trees 
 */
 
 