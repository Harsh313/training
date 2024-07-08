#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2;
	scanf("%d",&x1);
	scanf("%d",&x2);
	printf("before\n");
	printf("a = %d \nb = %d\n",x1,x2);
	x1=x1+x2;
	x2=x1-x2;
	x1=x1-x2;
	printf("after\n");
	printf("a = %d \nb = %d",x1,x2);
	return 0;
	
}
