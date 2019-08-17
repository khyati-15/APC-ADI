#include<stdio.h>
int squareroot(int n,int left,int right){
	int mid,ans;
	while(left<=right){
		mid=(left+right)/2;
		if(mid*mid == n){
		    ans=mid;
			break;
		}
		else if(mid*mid > n)
			right=mid-1;
		else{
		    ans=mid;
			left=mid+1;
		}
	}
	return ans;
}
int main(){
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int left=1,right=n/2,mid;
	
	int result=squareroot(n,left,right);
	printf("%d\n",result);
	return 0;
}