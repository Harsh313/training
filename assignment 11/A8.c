#include<stdio.h>
int main(){
	int arr1[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j)
			sum+=arr1[i][j];
		}
	}
	printf("\n Sum of the major diagonal element = %d",sum);
	return 0;
	
}
