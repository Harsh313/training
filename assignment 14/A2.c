#include<stdio.h>
int i=1;
void odd(int n){
	if(i==n+1)return;
	if(i%2!=0)
	{
		printf("%d ",i);
	}
	i++;
	odd(n);
}

void even(int n){
	if(i==n+1)return;
	if(i%2==0)
	printf("%d ",i);
	i++;
	even(n);
}
int main(){
	odd(100);
	printf("\n");
	i=1;
	even(100);
}
