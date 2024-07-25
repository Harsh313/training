#include<stdio.h>
int i=1,s;
void sum(int n){
	if(i==n+1)
	return ;
	s=s+i;
	i++;
	sum(n);
}
int main(){
	int n=10;
	sum(10);
	printf("%d",s);
	return 0;
}
