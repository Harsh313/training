#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b&&a>c)
	printf("a is graater");
	else if(b>c&&b>a)
	printf("b is greater");
	else
	printf("c is greater");
	return 0;
	
}
