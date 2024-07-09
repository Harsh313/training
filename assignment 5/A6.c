#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	
	switch((a>0&&a!=0)+1-(a<0)){//(a<0-a>0)
		case 2:
			printf("Positive");
			break;
		case 0:
			printf("Negative");
			break;
		case 1:
			printf("zero");
			break;
	}
	return 0;
}
