#include<stdio.h>
int main(){
	int n,prod=1;
	scanf("%d",&n);
	
	while(n){
		prod*=n%10;
		n/=10;
	}
	printf("product of digits is = %d",prod);
	return 0;
	
}
