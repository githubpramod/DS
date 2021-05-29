#include<iostream>

using namespace std;

class Node{
	public:
			Node* lchild;
			int data;
			Node* rchild;
};

class BST{
	private:
			Node* root;
	public:
			BST(){root = nullptr;}
			Node* getRoot(){return root;}
			void insertBST(int key);
			void inorderBST(Node* p);
			Node* searchBST(int key);
};

void BST::insertBST(int key){
	Node* t =root;
	Node* p;
	Node* r;
	if(root == nullptr){
		p=new Node;
		p->data=key;
		p->lchild = nullptr;
		p->rchild = nullptr;
		root = p;
		return;
	}
	while(t!=nullptr){
		r = t;
		if(key < t->data){
			t=t->lchild;
		}else if(key > t->data){
			key > t->data;
			t= t->rchild;
		}else{
			return;
		}
	}
	p = new Node;
	p->data = key;
	p->lchild = nullptr;
	p->rchild = nullptr;
	if(key < r->data){
		r->lchild = p;
	}else{
		r->rchild = p;
	}
}

void BST::inorderBST(Node* p){
	if(p){
		inorderBST(p->lchild);
		cout<<p->data<<" "<<flush;
		inorderBST(p->rchild);
	}
}

Node* BST::searchBST(int key){
	Node* t =root;
	while(t!=nullptr){
		if(key == t->data){
			return t;
		}else if(key < t->data){
			t=t->lchild;
		}else{
			t=t->rchild;
		}
	}
	return nullptr;
}

int main(){
	BST bst;
	bst.insertBST(10);
	bst.insertBST(5);
	bst.insertBST(20);
	bst.insertBST(8);
	bst.insertBST(30);
	
    bst.inorderBST(bst.getRoot());
    cout << endl;
    Node* temp = bst.searchBST(10);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }


	return 0;
}