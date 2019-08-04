#include<stdio.h>

int main(){
	int n;
	printf("Enter size : ");
	scanf("%d",&n);
	printf("Enter elements in range of n(0-n) : ");
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if (arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
        else
            printf("%d is repeating\n",abs(arr[i])); 
	}
	
	for(int i=0;i<n;i++)
		if(arr[i]>0)
			printf("Missing is %d\n",i+1);
}