#ifndef __QUEUE_DEF
#define __QUEUE_DEF

#include <iostream>

using namespace std;

class Node{
	public:
			int data;
			Node* next;
};

class Queue{
	private:
			int data;
			Node* front;
			Node* rear;
	public:
			Queue();
			~Queue();
			void enqueue(int data);			
			void Display();
			int dequeue();				
	
};

#endif