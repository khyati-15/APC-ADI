#include<iostream>
#include<math.h>
using namespace std;
//array must be in sorted manner
int binarysearch(int *arr,int size,int num){
	int left=0,right=size-1;

	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==num)
			return mid;
		else if(arr[mid]<num)
			left=mid+1;
		else
			right=mid-1;
	}
	return -1;
}

int main(){
	int size;
	cin>>size;
	int *arr=new int[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	
	int num;
	cin>>num;
	int result=binarysearch(arr,size,num);
	if(result==-1)
		cout<<"Number not found"<<endl;
	else
		cout<<num<<" found at "<<result<<endl;
	
}