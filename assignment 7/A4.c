#include<stdio.h>
int main(){
	int n,rem,i,rev;
	scanf("%d",&n);
	while(n){
		rem=n%10;
		n/=10;
		rev=rev*10+rem;
		
	}
	n=rev;
	while(n){
		rem=n%10;
		n/=10;
		
		switch(rem){
			case 0:
				printf("Zero");
				break;
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("seven");
				break;
			case 8:
				printf("Eight");
				break;
			case 9:
				printf("Nine");
				break;	
		}
		printf(" ");
	}


	return 0;
}
