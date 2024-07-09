#include<stdio.h>
int main(){
	char a;
	int b,c;
	scanf("%c",&a);
	printf("Enter two numbers");
	scanf("%d%d",&b,&c);
	switch(a){
		case '+':
			printf("Ans = %d",b+c);
			break;
		case '-':
			printf("Ans = %d",b-c);
			break;
		case '*':
			printf("Ans = %d",b*c);
			break;
		case '/':
			printf("Ans = %f",(float)b/c);
			break;
		
	}
	return 0;
}
