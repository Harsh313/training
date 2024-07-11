#include<stdio.h>
int main(){
	int arr[10],i,ind,n;
	printf("enter elements");
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	printf("the index of the element and the value of the element ");
	scanf("%d%d",&ind,&n);
	for(i=9;i>ind;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[ind]=n;
	for(i =0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	
	return 0;
}
