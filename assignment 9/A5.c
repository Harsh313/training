#include<stdio.h>
int main(){
	int arr[10],i,max=-1,mini=-1;
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(max<arr[i])max=arr[i];	
	}
	for(i=0;i<10;i++){
		if(arr[i]>mini&&arr[i]!=max)
		mini=arr[i];
	}
	printf("second largest element is %d",mini);
	
	
	
	return 0;
}
