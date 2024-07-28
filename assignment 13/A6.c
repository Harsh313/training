#include<string.h>
#include<stdio.h>
int main(){
	char str[100];
	int alpha=0,digit=0,special=0,i;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		alpha++;
		else if(str[i]>='0'&&str[i]<='9')
		digit++;
		else
		special++;
	} 
	printf("total number of alphabet is %d\n",alpha);
	printf("total number of digit is %d\n",digit);
	printf("total number of special character is %d\n",special);
	return 0;
}
