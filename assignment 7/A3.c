#include<stdio.h>
int main(){
	int n,arr[10]={0},rem,i;
	scanf("%d",&n);
	while(n){
		rem=n%10;
		n/=10;
		arr[rem]++;
	}
	for(i=0;i<10;i++){
		if(arr[i]>0)
		printf("%d frequency is %d\n",i,arr[i]);
	}

	return 0;
}
