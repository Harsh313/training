#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	switch(a>b){
		case 1:
			printf("A is greater");
			break;
		case 0:
			printf("B is greater");
			break;
	}
	return 0;
}
