#include<stdio.h>
int main(){
	int arr[10],i,sum=0;
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum of the array is %d",sum);
	
	return 0;
}
