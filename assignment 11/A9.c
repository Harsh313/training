#include<stdio.h>
int main(){
	int arr1[3][3]={7,3,1,5,2,5,4,0,6},i,j,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i+j==2)
			sum+=arr1[i][j];
		}
	}
	printf("\n Sum of the minor diagonal element = %d",sum);
	return 0;
	
}
