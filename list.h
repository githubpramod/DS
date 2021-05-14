#ifndef __LIST_DEF
#define __LIST_DEF

#include <iostream>
using namespace std;

class Node{
	public:
			int data;
			Node* next;
};

class linkedList{
	private:
			Node* node;
	public:
			linkedList();
			~linkedList();
			void swap(Node *a, Node* b);			
			void Create(Node* node, int val);
			void pushAtIndex(Node* node, int index, int val);
			void Display(Node* node);
			int CountNode(Node* node);			
			int Delete(Node* node, int index);			
			int isSorted(Node* node);			
};

#endif


