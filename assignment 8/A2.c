#include<stdio.h>
int main(){
	int n,f,l;
	scanf("%d",&n);
	f=n%10;
	while(n){
		l=n%10;
		n/=10;
	}
	printf("Sum of first and last digit is = %d",l+f);
	return 0;
	
}
