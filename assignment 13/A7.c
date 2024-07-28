#include<string.h>
#include<stdio.h>
int main(){
	char str[100];
	int vowel=0,conso=0,i;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		vowel++;
		else
		conso++;
	} 
	printf("total number of vowel %d\n",vowel);
	printf("total number of consonent %d\n",conso);
	
	return 0;
}
