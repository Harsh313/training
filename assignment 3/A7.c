#include<stdio.h>
int main(){
	int num,digit,rev;
	scanf("%d",&num);
	while (num > 0) {
        digit = num % 10;
        printf("%d\n", digit);
        rev = rev * 10 + digit;
        num /= 10;
    }
	while (rev > 0) {
        digit = rev % 10;
        //printf("%d\n", digit);
        rev /= 10;
    }
	
	return 0;
	
}
