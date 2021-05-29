#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v1{1,2,3,4,5};
	//vector<int> v2(move(v1));
	vector<int> v2(v1);
	cout<<"first"<<endl;
	cout<<"V"<<endl;
	for(auto it = v1.begin(); it<v1.end(); ++it){
		cout<<*it<<" ";
	}
cout<<endl;

v1.front() = 6;
	cout<<"V1 after 6"<<endl;
	for(auto it = v1.begin(); it<v1.end(); ++it){
		cout<<*it<<" ";
	}
cout<<endl;
	v2=(move(v1));
	cout<<"V2 after copy"<<endl;
		for(auto it = v2.begin(); it<v2.end(); ++it){
		cout<<*it<<" ";
	}
cout<<endl;
	
	return 0;
}