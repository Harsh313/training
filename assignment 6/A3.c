#include<stdio.h>
int main(){
	char ch='a';
	while(ch!='z'+1){
		printf("%c ",ch);
		ch++;
	}
	return 0;
}
