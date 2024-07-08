#include<stdio.h>
int main(){
	char a; 
	scanf("%c",&a);
	if(a>='a'&&a<='z'||(a>='A'&&a<='Z'))
	printf("Alphabets");
	else if(a>='0'&&a<='9')
	printf("Digits");
	else 
	printf("Special character");
	return 0;
}
