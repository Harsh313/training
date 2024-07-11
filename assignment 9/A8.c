#include<stdio.h>
int main(){
	int arr[10],i,arr1[10]={0};
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		arr1[i]=arr[i];
	}
	for(i=0;i<10;i++){
		printf("%d ",arr1[i]);
	}
	return 0;
}
