#ifndef __STACK_DEF
#define __STACK_DEF

#include <iostream>
using namespace std;

class Node{
	public:
			int data;
			Node* next;
};

class Stack{
	private:
			Node* top;
	public:
			Stack();
			~Stack();
			void push(int data);			
			void Display();
			int pop();				
	
};

#endif