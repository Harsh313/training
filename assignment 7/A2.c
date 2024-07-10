#include<stdio.h>
int main(){
	int n,rev=0,rem,temp;
	scanf("%d",&n);
	temp=n;
	while(n){
		rem=n%10;
		n/=10;
		rev=(rev*10)+rem;
	}
	if(temp==rev)printf("Number is palindrome");
	else printf("Number is not palindrome");
	return 0;
}
