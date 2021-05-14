#include "sort.h"
#include "graph.h"
#include"hashTable.h"
#include "tree.h"
#include <iostream>


using namespace std;


int main() {

  int Array[10] = {3,5,8,8,4,12,45,76,90,45};
  int size = sizeof(Array) / sizeof(Array[0]);
  countSort iS(Array,10);
  iS.display();
  iS.sortArray();
  cout << "Sorted array in ascending order:\n";
  iS.display();

  return 0;
}
















/*
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