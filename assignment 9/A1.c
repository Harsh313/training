#include<stdio.h>
int main(){
	int arr[10],i;
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("array elements are ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
