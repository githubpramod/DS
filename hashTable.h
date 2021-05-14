#ifndef __HASHTABLE_DEF
#define __HASHTABLE_DEF


#include <iostream>
#include <list>
using namespace std;

class HashTable
{
  int capacity;
  list<int> *table;

public:
  HashTable(int V);
  void insertItem(int key, int data);
  void deleteItem(int key);

  int checkPrime(int n)
  {
  int i;
  if (n == 1 || n == 0)
  {
    return 0;
  }
  for (i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
    return 0;
    }
  }
  return 1;
  }
  int getPrime(int n)
  {
  if (n % 2 == 0)
  {
    n++;
  }
  while (!checkPrime(n))
  {
    n += 2;
  }
  return n;
  }

  int hashFunction(int key)
  {
  return (key % capacity);
  }
  void displayHash();
};





#endif
