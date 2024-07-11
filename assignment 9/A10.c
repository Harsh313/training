#include<stdio.h>
int main(){
	int arr[10],i,ind;
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("the index of the element ");
	scanf("%d",&ind);
	for(i=ind;i<9;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i =0;i<9;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	return 0;
}
