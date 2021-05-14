#ifndef __SORT_DEF
#define __SORT_DEF

#include <iostream>

using namespace std;

class bubbleSort{
	private:
			int *pAdata = nullptr;
			int maxLen=0;
	public:
			bubbleSort(); //default;
			bubbleSort(int *pdata); //delete;
			bubbleSort(int A[], int len);
			~bubbleSort();
			void sortArray();
			void display();
			
};

class insertionSort{
	private:
			int *pAdata = nullptr;
			int maxLen=0;
	public:
			insertionSort(); //default;
			insertionSort(int *pdata); //delete;
			insertionSort(int A[], int len);
			~insertionSort();
			void sortArray();
			void display();
			
};

class selectionSort{
	private:
			int *pAdata = nullptr;
			int maxLen=0;
	public:
			selectionSort(); //default;
			selectionSort(int *pdata); //delete;
			selectionSort(int A[], int len);
			~selectionSort();
			void sortArray();
			void display();
			
};

#if 0
class quickSort{
	private:
			int *pAdata = nullptr;
			int maxLen=0;
	public:
			quickSort(); //default;
			quickSort(int *pdata); //delete;
			quickSort(int A[], int len);
			~quickSort();
			void swap(int *a, int *b) ;
			int partition(int array[], int low, int high);
			void qsortArray(int array[], int low, int high);
			void sortArray();
			void display();
			
};
#endif

class countSort{
	private:
			int *pAdata = nullptr;
			int maxLen=0;
	public:
			countSort(); //default;
			countSort(int *pdata); //delete;
			countSort(int A[], int len);
			~countSort();
			int findMax();
			void sortArray();
			void display();
			
};

#endif
