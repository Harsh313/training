#include<stdio.h>
int main(){
	int n,rev=0,rem;
	scanf("%d",&n);
	while(n){
		rem=n%10;
		n/=10;
		rev=(rev*10)+rem;
	}
	printf("%d",rev);
	return 0;
}
