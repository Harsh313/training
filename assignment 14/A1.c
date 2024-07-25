#include<stdio.h>
int i=1;
//void print(int *n){
//	if(*n==0)return;
//	printf("%d ",(*n)--);
//	print(n);
//}
void print1(int n){
	if(i==n+1)return;
	printf("%d ",i++);
	print1(n);
}
int main(){
	int n=100;
	print1(n);
	
	return 0;
}
