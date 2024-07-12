#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	
	while(n){
		sum+=n%10;
		n/=10;
	}
	printf("Sum of  digit is = %d",sum);
	return 0;
	
}
