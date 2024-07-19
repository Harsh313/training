#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5},i,temp,n=5;
	printf("\n Array befor rotation\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	temp=arr[0];
	for(i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
	printf("\n Array after rotation\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
