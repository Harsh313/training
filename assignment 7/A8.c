#include<stdio.h>
int main(){
	int n,res=1,temp;
	scanf("%d",&n);
	temp=n;
	while(n>=1){
		res*=n;
		n--;
	}
	printf("Factorial of the number %d is %d",temp,res);
	return 0;
}
