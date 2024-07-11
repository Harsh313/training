#include<stdio.h>
int main(){
	int arr[10],i,odd=0,even=0;
	printf("enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)even++;
		else odd++;	
	}
	
	printf("total number of odd %d\n total number of even %d",odd,even);
	
	
	
	return 0;
}
