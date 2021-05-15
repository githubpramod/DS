#include"stack.h"


Stack::Stack(){
	top = NULL;
}
Stack::~Stack(){
	
}
void Stack::push(int data){
	Node* temp = new Node{};
	if(temp==NULL){
		cout<<"Stack is full\n"<<endl;
	}else{
		temp->data=data;
		temp->next=top;
		top=temp;
	}
}	
void Stack::Display(){
	Node* temp = new Node{};
	temp = top;
	while(temp!=NULL){
		cout<<temp->data<<' ';
		temp=temp->next;
	}
	cout<<endl;
}
int Stack::pop(){
	int x=-1;
	if(top==NULL){
		cout<<"Stack is empty\n"<<endl;
	}else{
		Node* temp = new Node{};
		x=top->data;
		temp=top;
		top=top->next;
		delete temp;
	}
}
	

