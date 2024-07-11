#include<stdio.h>
int main(){
	int arr[10],i,count=0;
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<0)count++;
	}
	
	printf("total no. of negative number is %d ",count);
	
	
	
	return 0;
}
