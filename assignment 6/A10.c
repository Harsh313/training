#include<stdio.h>
int main(){
	int n,count=0;
	scanf("%d",&n);
	while(n){
		n/=10;
		count++;
	}
	printf("No. of digits = %d",count);
	return 0;
}
