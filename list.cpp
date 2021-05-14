#include"list.h"

linkedList::linkedList(){
	
}
linkedList::~linkedList(){
	
}
void linkedList::swap(Node *a, Node* b){
	int x;
	x = a->data;
	a->data = b->data;
	b->data = x;
	
}		
void linkedList::Create(Node* node, int val){
	Node* temp =new Node{};
	Node* r = new Node{};
	if(node != NULL){
		temp = node;
		while(temp->next!=NULL)
			temp=temp->next;
		r->data = val;
		r->next = NULL;
		temp->next= r;
	}else{
		temp->data = val;
		temp->next = NULL;
		node= temp;
	}
}
void linkedList::pushAtIndex(Node* node, int index, int val){
	Node* temp = new Node;
	Node* r = new Node;
	temp = node;
	for(int i=0; i<index; ++i){
		temp=temp->next;
	}
	r->data = val;
	r->next = temp->next;
	temp->next = r;
}
void linkedList::Display(Node* node){
	while(node!=NULL){
		cout<<node->data<<' ';
		node=node->next;
	}
}
int linkedList::CountNode(Node* node){
	int c=0;
	while(node!=NULL){
		node=node->next;
		++c;
	}
	return c;
}	
int linkedList::Delete(Node* node, int index){
	int x = 0;
	Node* hold = new Node;
	Node* temp = new Node;
	Node* r = new Node;
	temp = node;
	for(int i=0; i<index; ++i){
		hold = temp;
		temp=temp->next;
	}
	x=temp->data;
	hold->next = temp->next;
	
	return x;
}	
int linkedList::isSorted(Node* node){
	int x;
	Node* i = new Node;
	Node* j = new Node;
	for(i=node; i!=NULL;i=i->next){
		for(j=i->next;j!=NULL; j=j->next){
			if(i->data > j->data){
				x=j->data;
				j->data = i->data;
				i->data = x;
			}
		}
	}
	return 0;
}