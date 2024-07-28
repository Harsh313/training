#include<stdio.h>
int main(){
	int mat[3][3]={2,3,6,3,4,5,6,5,9},temp,i,j,flag=0;
	printf("Before \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		   if(mat[i][j]!=mat[j][i])
		   {
		   	flag=1;
		   	break;
		   }
		}	
	}
	if(flag)
	printf("Not a Symmetric Matrix");
	else
	printf("A Symmetric Matrix");
	return 0;
			
}
