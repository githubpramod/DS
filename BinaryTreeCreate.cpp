#include<iostream>

using namespace std;

struct Node
{
 struct Node *lchild;
 int data;
 struct Node *rchild;
};
struct Queue
{
 int size;
 int front;
 int rear;
 struct Node **Q;
};

void queueCreate(Queue *q, int size){
	
			q->size = size;
			q->front = q->rear = 0;
			q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
}

void enqueue(Queue *q, Node *x){
			if((q->rear+1)%q->size == q->front){
				cout<<"Queue is full"<<endl;
			}else{
				q->rear=(q->rear+1)%q->size;
				q->Q[q->rear]=x;
			}
}

Node *dequeue(Queue *q){
			Node *x = NULL;
			if(q->front==q->rear){
				cout<<"Queue is empty"<<endl;
			}else{
				q->front=(q->front+1)%q->size;
				x=q->Q[q->front];
			}
			return x;
}

int isEmpty(Queue q){
	
			return q.front == q.rear;
}

struct Node *root=NULL;

void treeCreate(){
	Node *p, *t;
	int x;
	Queue q;
	queueCreate(&q, 10);
	cout<<"enter the root value\n";
	cin>>x;
	root=(struct Node *)malloc(sizeof(struct Node));
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q, root);
	while(!isEmpty(q)){
		p=dequeue(&q);
		cout<<"Enter left child: "<<p->data<<endl;
		cin>>x;
		if(x!=-1){
			t=(struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q, t);
		}
		cout<<"enter right child: "<<p->data<<endl;
		cin>>x;
		if(x!=-1){
			t=(struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
		}
	}
	
}

void preorder(Node *p){
	
	if(p){
		cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void inorder(Node *p){
	
	if(p){
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
}
void postorder(Node *p){
	
	if(p){
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<" ";
	}
}
int main(){
	
	treeCreate();
	preorder(root);
	cout<<"Post order"<<endl;
	postorder(root);	
	
	return 0;
}