#ifndef __HASHTABLE_DEF
#define __HASHTABLE_DEF


#include <iostream>
#include <list>
using namespace std;

class hashTable{
	private:
			int size ;
	public:
			hashTable(int s);
			~hashTable();
			int hash(int key);
			int probe(int H[], int key);
			void Insert(int H[], int key);
			int Search(int H[], int key);
};




#endif
