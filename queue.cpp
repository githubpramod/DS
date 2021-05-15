#include"queue.h"

Queue::Queue(){
	front = rear = NULL;
}
Queue::~Queue(){
	
}
void Queue::enqueue(int data){
    Node *temp=new Node;
    if(temp==NULL){
        cout<<"Overflow"<<endl;
        return;
    }
    temp->data=data;
    temp->next=NULL;
 

    if(front==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
    cout<<data<<" has been inserted successfully."<<endl;
}
void Queue::Display(){
	Node* p = new Node{};
	p = front;
	while(p){
		cout<<p->data<<' ';
		p=p->next;
	}
	cout<<endl;
}
int Queue::dequeue(){
	int x = -1;
	Node* t;
	if(front == NULL){
		cout<<"Queue is Empty\n"<<endl;
	}else{
		x=front->data;
		t=front;
		front=front->next;
		delete t;
	}
	cout<<x<<" has been removed successfully."<<endl;
	return x;
}		