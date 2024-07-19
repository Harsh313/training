#include<stdio.h>
int main(){
	int arr1[3][3]={1,2,3,4,5,6,7,8,9},i,j,n;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("enter the number \n");
	scanf("%d",&n);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr1[i][j]*=n;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
}
