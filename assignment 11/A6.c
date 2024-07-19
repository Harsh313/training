#include<stdio.h>
int main(){
	int arr1[2][2]={1,2,3,4},arr2[2][2]={5,6,7,8},res[2][2],i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			res[i][j]=0;
			for(k=0;k<2;k++){
				res[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}
