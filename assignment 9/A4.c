#include<stdio.h>
int main(){
	int arr[10],i,min=1000000,max=-1;
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(min>arr[i])min=arr[i];
		if(max<arr[i])max=arr[i];
	}
	printf("Max element is =%d\nMin element is =%d",max,min);
	
	
	return 0;
}
