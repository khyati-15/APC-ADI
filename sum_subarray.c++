#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(const vector<int> &A) {
    
    int sum=A[0],max=A[0];
    for(int i=1;i<A.size();i++){
        if(sum+A[i]>=A[i]){
            sum+=A[i];
        }
        
        else
        sum=A[i];
        if(max<sum)
        {
            max=sum;
        }
        
    }
    return max;
}


int main(){
	vector<int> v;
	int size,num;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>num;
		v.push_back(num);
	}
	int result=maxSubArray(v);
	cout<<result;
}