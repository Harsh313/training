#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	if((num%4==0&&num%100!=0)||num%400==0)
	printf("number is leap year");
	else
	printf(" number is not a leap year");
	
	return 0;
	
}
