#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	if(num<0){
		num*=-1;
	}
	printf("absolute of the given number is =%d",num);
	
	return 0;
	
}
