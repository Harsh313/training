#include<stdio.h>
int main(){
	char num;
	scanf("%c",&num);
	if((num>='a'&&num<='z')||num>='A'&&num<='Z')
	printf("Given character is a alphabet");
	else 
	printf("Given character is not a alphabet");
	
	
	return 0;
	
}
