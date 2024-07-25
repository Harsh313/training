#include<stdio.h>

int fact(int n){
	if(n==0)return 1;
	return n*fact(n-1);
}
int main(){
	int s=fact(5);
	printf("%d",s);
	return 0;
}
