#include<string.h>
#include<stdio.h>
int main(){
	int n;
	char str[100],rev[100];
	scanf("%s",&str);
	strcpy(rev,str);
	strrev(rev);
	n=strcmp(rev,str);
	if(n==0)
	printf("Palindrom");
	else
	printf("not Palindrom");
	
	return 0;
}
