#include<stdio.h>
int main(){
	int a,b,temp,a1,b1;
	scanf("%d%d",&a,&b);
	a1=a;
	b1=b;
	printf("LCM of %d and %d is ",a,b);
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	temp=(a1*b1)/(a);
	printf("%d",temp);
}
