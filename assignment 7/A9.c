#include<stdio.h>
int main(){
	int a,b,temp;
	scanf("%d%d",&a,&b);
	printf("HCF of %d and %d is ",a,b);
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	printf("%d",a);
}
