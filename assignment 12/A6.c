#include<stdio.h>
int main(){
	int mat[3][3]={1,2,3,4,5,6,7,8,9},temp,i,j,tran[3][3];
	printf("Before \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		   tran[i][j]=mat[j][i];
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",tran[i][j]);
		}
		printf("\n");
	}		
}
