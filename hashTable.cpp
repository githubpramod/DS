#include"hashTable.h"

hashTable::hashTable(int s):size{s}{
	
}
hashTable::~hashTable(){
	
}
int hashTable::hash(int key){
	return key%this->size;
}
int hashTable::probe(int H[], int key){
	int index = hash(key);
	int i=0;
	while(H[(index+i)%this->size]!=0)
		i++;
	return (index+i)%this->size;
}
void hashTable::Insert(int H[], int key){
	int index = hash(key);
	if(H[index]!=0)
		index=probe(H,key);
	H[index]=key;
}
int hashTable::Search(int H[], int key){
	int index = hash(key);
	int i=0;
	while(H[(index+i)%this->size]!=key)
		i++;
	return (index+i)%this->size;
}
