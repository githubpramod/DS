#include "sort.h"

using namespace std;


//bubbleSort::bubbleSort(); //default;
//bubbleSort::bubbleSort(int *pdata); //delete;
bubbleSort::bubbleSort(int A[], int len):maxLen(len){
				pAdata = new int[maxLen];
				for(int i=0; i<maxLen; ++i){
					pAdata[i] = A[i];
				}
			}
bubbleSort::~bubbleSort(){
				delete[] pAdata;
			}
void bubbleSort::sortArray(){
				int i,j;
				int swapVal, flag;
				for(i=0; i<maxLen-1; ++i){
					flag = 0;
					for(j=0; j<maxLen-1-i; ++j){
						if(pAdata[j] > pAdata[j+1] ){
							//cout<<pAdata[i]<<' '<<pAdata[i]<<endl;
							swapVal = pAdata[j];
							pAdata[j] = pAdata[j+1];
							pAdata[j+1] = swapVal;
						}
						flag = 1;
					}
					if(flag == 0) break;
				}
			}
void bubbleSort::display(){
				int i;
				for(i=0; i<maxLen; ++i){
					cout<<pAdata[i]<<' ';
				}
				cout<<endl;
			}
/*****************************************************************************/

insertionSort::insertionSort(int A[], int len):maxLen(len){
				pAdata = new int[maxLen];
				for(int i=0; i<maxLen; ++i){
					pAdata[i] = A[i];
				}
			}
insertionSort::~insertionSort(){
				delete[] pAdata;
			}
void insertionSort::sortArray(){
				int i=0,j=0,key=0;
				for(i=1; i<maxLen; ++i){
					j = i-1;
					key = pAdata[i];
					while(key<pAdata[j] && j>-1){
						pAdata[j+1] = pAdata[j];
						j--;
					}
				}
				pAdata[j+1]=key;
			}
void insertionSort::display(){
				int i;
				for(i=0; i<maxLen; ++i){
					cout<<pAdata[i]<<' ';
				}
				cout<<endl;
			}
/*****************************************************************************/

selectionSort::selectionSort(int A[], int len):maxLen(len){
				pAdata = new int[maxLen];
				for(int i=0; i<maxLen; ++i){
					pAdata[i] = A[i];
				}
			}
selectionSort::~selectionSort(){
				delete[] pAdata;
			}
void selectionSort::sortArray(){
				int i=0,j=0,k=0,temp=0;
				for(i=0; i<maxLen-1; ++i){
					
					for(j=k=i;j<maxLen;j++){
						if(pAdata[j] < pAdata[k]){
							k=j;
						}
						temp = pAdata[i];
						pAdata[i] = pAdata[k];
						pAdata[k] = temp;
					}
					
				}
			}
void selectionSort::display(){
				int i;
				for(i=0; i<maxLen; ++i){
					cout<<pAdata[i]<<' ';
				}
				cout<<endl;
			}
/*****************************************************************************/
#if 0
quickSort::quickSort(int A[], int len):maxLen(len){
				pAdata = new int[maxLen];
				for(int i=0; i<maxLen; ++i){
					pAdata[i] = A[i];
				}
			}
quickSort::~quickSort(){
				delete[] pAdata;
			}
void quickSort::swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}			
int quickSort::partition(int *array, int low, int high) {
    
  int pivot = array[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  
  return (i + 1);
}

void quickSort::qsortArray(int array[], int low, int high){
			int low=0, high=0, pivot=0;
			high = pAdata[maxLen-1];
			low = pAdata[0];
			
				pivot = partition(pAdata,low, high);
				
				sortArray(pAdata, low, pivot - 1);
				//sortArray(pAdata, pivot + 1, high);
}
			
void quickSort::sortArray(){
			int low=0, high=0, pivot=0;
			high = pAdata[maxLen-1];
			low = pAdata[0];
				
			qsortArray(pAdata, low, high);

}
void quickSort::display(){
				int i;
				for(i=0; i<maxLen; ++i){
					cout<<pAdata[i]<<' ';
				}
				cout<<endl;
}		
#endif
/*****************************************************************************/

countSort::countSort(int A[], int len):maxLen(len){
				pAdata = new int[maxLen];
				for(int i=0; i<maxLen; ++i){
					pAdata[i] = A[i];
				}
			}
countSort::~countSort(){
				delete[] pAdata;
			}
int countSort::findMax(){
			int max = INT32_MIN;
			int i;
			for(i=0;i<maxLen;i++){
				if(pAdata[i]  > max)
					max = pAdata[i] ;
			}
			return max;
}			
void countSort::sortArray(){
			int i, j, max, *c;
			max = findMax();
			std::cout<<"mam"<<max<<std::endl;
			c = new int[max+1];
			for(i=0; i<max+1; i++){
				c[i] = 0;
			}
			std::cout<<"mam1"<<std::endl;
			for(i=0; i<maxLen; i++){
				c[pAdata[i]]++;
				std::cout<<c[pAdata[i]]<<' ';
			}	

			i =0, j=0;
			while(j<max+1){
				if(c[j]>0){
					pAdata[i++] = j;
					c[j]--;
				}else{
					j++;
				}
			}
			delete[] c;
}
void countSort::display(){
				int i;
				for(i=0; i<maxLen; ++i){
					cout<<pAdata[i]<<' ';
				}
				cout<<endl;
}
/*****************************************************************************/
binSort::binSort(int A[], int len):maxLen(len){
				pAdata = new int[maxLen];
				for(int i=0; i<maxLen; ++i){
					pAdata[i] = A[i];	
				}
}
binSort::~binSort(){
					delete[] pAdata;
}

int binSort::getBucketIndex(int index){
				return index/capacity;
}
void binSort::printBuckets(Node* node){
	Node* cur = node;
	cout<<setw(3)<<cur->data;
	cur=cur->next;
}
Node* binSort::insertionSort(Node* list){
	Node *k, *nodeList;
	if(list == 0 || list->next == 0){
		return list;
	}
	
	nodeList =list;
	k = list->next;
	nodeList->next=0;
	while(k!=0){
		Node *ptr;
		if(nodeList->data > k->data){
			Node* temp;
			temp = k;
			k = k->next;
			temp->next = nodeList;
			nodeList = temp;
			continue;
		}
		for(ptr = nodeList;ptr->next!=0; ptr=ptr->next){
			if(ptr->next->data > k->data)
				break;
		}
		if(ptr->next!=0){
			Node* temp;
			temp = k;
			k = k->next;
			temp->next = ptr->next;
			ptr->next = temp;
			continue;
		}else{
			ptr->next = k;
			k = k->next;
			ptr->next->next = 0;
			continue;
		}
	}
	return nodeList;
}
void binSort::sortArray(){
				int i,j,pos;
				Node** buckets = new Node*[nofBucket];
				for(i=0; i<nofBucket;++i){
					buckets[i] = NULL;
				}
				
				for(i=0; i<maxLen; ++i){
					Node *current = new Node;
					pos = getBucketIndex(pAdata[i]);
					current->data = pAdata[i];
					current->next = buckets[pos];
					buckets[pos] = current;
				}
				
				for(i=0;i<nofBucket;++i){
				cout<<"Bucket["<<i<<"]:";
				printBuckets(buckets[i]);
				cout<<endl;
				}
				
				for(i=0;i<nofBucket;++i){
					buckets[i]=insertionSort(buckets[i]);
				}
				cout<<endl;
				for(i=0;i<nofBucket;++i){
					cout<<"Bucket["<<i<<"]:";
					printBuckets(buckets[i]);
					cout<<endl;
				}
				
				for(j=i=0;i<nofBucket;++i){
					Node* node;
					node = buckets[i];
					while(node){
						pAdata[j++] = node->data;
						node = node->next;
					}
				}
				
				for(i=0;i<nofBucket;++i){
					Node* node;
					node = buckets[i];
					while(node){
						Node* temp;
						temp = node;
						node = node->next;
						delete temp;
					}
				}
			delete buckets;
			return;
}
void binSort::display(){
	
}