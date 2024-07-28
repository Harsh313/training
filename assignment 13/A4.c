#include<string.h>
#include<stdio.h>
int main(){
	char str[]="harsh",str1[]=" sharma";
	int n;
	n=strcmp(str,str1);
	if(n==0)
	printf("same string");
	else
	printf("not same string");
	 
	return 0;
}
