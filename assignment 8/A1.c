#include<stdio.h>
int main(){
	int n,f,l;
	scanf("%d",&n);
	f=n%10;
	while(n){
		l=n%10;
		n/=10;
	}
	printf("First digit is %d\n Last digit is %d",l,f);
	return 0;
	
}
