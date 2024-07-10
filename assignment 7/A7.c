#include<stdio.h>
int main(){
	int a,i;
	scanf("%d",&a);
	printf("Factors of %d\n",a);
	for(i=2;i<=a;i++){
		if(a%i==0)
		printf("%d\n",i);
	}
	return 0;
}
