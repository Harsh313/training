#include<stdio.h>
int main(){
	int a;
	int b,c;
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	scanf("%d",&a);
	printf("Enter two numbers\n");
	scanf("%d%d",&b,&c);
	switch(a){
		case 1:
			printf("Ans = %d",b+c);
			break;
		case 2:
			printf("Ans = %d",b-c);
			break;
		case 3:
			printf("Ans = %d",b*c);
			break;
		case 4:
			printf("Ans = %f",(float)b/c);
			break;
		
	}
	return 0;
}
