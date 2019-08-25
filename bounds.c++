#include<iostream>
#include<math.h>
using namespace std;
//array must be in sorted manner
int lowerbound(int *arr,int size,int num){
	int left=0,right=size-1;

	while(left<right){
		int mid=(left+right)/2;
		if(arr[mid]>=num)
			right=mid;
		else
			left=mid+1;
		
	}
	return right;
}

int upperbound(int *arr,int size,int num){
	int left=0,right=size-1;

	while(left<right){
		int mid=(left+right)/2;
		if(arr[mid]>num)
			right=mid;
		else 
			left=mid+1;
	}
	return right;
}

int main(){
	int size;
	cin>>size;
	int *arr=new int[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	
	int num;
	cin>>num;
	int result1=upperbound(arr,size,num);
	int result2=lowerbound(arr,size,num);
	cout<<"Lower bound of "<<num<<" is "<<arr[result2]<<endl;
	cout<<"Upper bound of "<<num<<" is "<<arr[result1]<<endl;
	
}