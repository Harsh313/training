#include<stdio.h>
int main(){
	int mat[3][3]={1,0,0,0,1,0,0,0,1},temp,i,j,count=0,n=3;
	printf("Before \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		  if(mat[i][j]==0)
		  count++; 	
		}
	}
	if(count>(n*n)/2)
	printf("Sparse Matrix");
	else
	printf("Not An Sparse Matrix");
	return 0;
			
}
