//#include"queue.h"
//#include"stack.h"
//#include"list.h"
//#include "sort.h"
//#include "graph.h"
//#include"hashTable.h"
#include "tree.h"
#include <iostream>


using namespace std;


int main() {

binarySearchTree bst;
bstNode *root = NULL;
  root = bst.insert(root, 1);
  root = bst.insert(root, 2);
  root = bst.insert(root, 4);
  root = bst.insert(root, 6);
  root = bst.insert(root, 7);
  root = bst.insert(root, 150);
  root = bst.insert(root, 44);
  root = bst.insert(root, 89);

  cout << "inorderTraversal traversal: ";
  bst.inorderTraversal(root);

  root = bst.deleteNode(root, 150);
  cout << "inorderTraversal traversal: ";
  bst.inorderTraversal(root);

  
  cout<<endl;
  
  return 0;
}
















/*

fullBinTree ftr;
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);
  root->right->right = new Node(4);

  if (ftr.isFullBinaryTree(root))
    cout << "The tree is a full binary tree\n";
  else
    cout << "The tree is not a full binary tree\n";
    cout << "Inorder traversal ";
  ftr.inorderTraversal(root);

  cout << "\nPreorder traversal ";
  ftr.preorderTraversal(root);

  cout << "\nPostorder traversal ";
  ftr.postorderTraversal(root);
  int Array[10] = {3,5,8,8,4,12,45,76,90,45};
  int size = sizeof(Array) / sizeof(Array[0]);
  binSort bs(Array,size);
  bs.display();
  bs.sortArray();
  bs.display();
	
	int HT[10]={0};
	hashTable ht(10);
	ht.Insert(HT,12);
	ht.Insert(HT,25);
	ht.Insert(HT,365);
	ht.Insert(HT,35);
	ht.Insert(HT,26);
	
	cout<<"Key found at:"<<ht.Search(HT,35)<<endl;
    Queue qq;
    qq.enqueue(10);
	cout<<"First"<<endl;
    qq.enqueue(20);
    qq.Display();   
    qq.enqueue(150);
    qq.enqueue(204);
    qq.Display(); 
	cout<<"Deque"<<qq.dequeue()<<endl;
    qq.Display(); 
	cout<<endl;
nt c=0,del = 0;
	linkedList ll;
    Node* head = NULL;
    head = new Node{};
    cout<<"After Sorted: "<<ll.isSorted(head)<<endl;
    ll.Display(head);
    
    head->data=23;
    ll.Create(head,134);
    ll.Create(head,1076);
    ll.Create(head,103);
    ll.Create(head,134);
    ll.Create(head,107);
    ll.Create(head,103);
    c = ll.CountNode(head);
    cout<<"Nodes: "<<c<<endl;
    cout<<"Create: "<<endl;
    ll.Display(head);
    ll.pushAtIndex(head,4,223);
    cout<<"\nAfter Pushing: "<<endl;
    ll.Display(head);
    ll.Create(head,553);
    ll.Create(head,763);
    cout<<"\nCreate: "<<endl;
    ll.Display(head);
    ll.pushAtIndex(head,0,999);
    cout<<"\nAfter Pushing: "<<endl;
    ll.Display(head);
    c = ll.CountNode(head);
    cout<<"\nNodes: "<<c<<endl;
    
    del = ll.Delete(head,3);
    cout<<"\nDeleted node: "<<del<<endl;
    ll.Display(head);
    
    c = ll.CountNode(head);
    cout<<"\nNodes: "<<c<<endl;
    
    //isSorted(head);
    cout<<"\nAfter Sorted: "<<ll.isSorted(head)<<endl;
    ll.Display(head);
  int Array[10] = {3,5,8,8,4,12,45,76,90,45};
  int size = sizeof(Array) / sizeof(Array[0]);
  insertionSort iS(Array,10);
  iS.display();
  iS.sortArray();
  cout << "Sorted array in ascending order:\n";
  iS.display();
  nt Array[10] = {3,5,8,8,4,12,45,76,90,45};
  bubbleSort bs(Array, 10);
  bs.display();
  bs.sortArray();
  bs.display();
  tree tr;
  Node* root = new Node(1);
  root->left = new Node(12);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);

  cout << "Inorder traversal ";
  tr.inorderTraversal(root);

  cout << "\nPreorder traversal ";
  tr.preorderTraversal(root);

  cout << "\nPostorder traversal ";
  tr.postorderTraversal(root);

  cout<<endl;
  
  Graph g(8);
  g.addEdge(0, 1);
  g.addEdge(1, 2);
  g.addEdge(2, 3);
  g.addEdge(2, 4);
  g.addEdge(3, 0);
  g.addEdge(4, 5);
  g.addEdge(5, 6);
  g.addEdge(6, 4);
  g.addEdge(6, 7);

  cout << "Strongly Connected Components:\n";
  g.printSCC();
  
   int key[] = {231, 321, 212, 321, 433, 262};
  int data[] = {123, 432, 523, 43, 423, 111};
  int size = sizeof(key) / sizeof(key[0]);

  HashTable h(size);

  for (int i = 0; i < 6; i++)
	h.insertItem(key[i], data[i]);

  h.deleteItem(12);
  h.displayHash();
  
  cout<<endl;
*/