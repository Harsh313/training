#include<stdio.h>
int main(){
	char a; 
	scanf("%c",&a);
	if(a>='a'&&a<='z')printf("Lower case");
	if(a>='A'&&a<='Z')printf("Upper case");
	return 0;
}
