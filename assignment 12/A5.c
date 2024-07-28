#include<stdio.h>
int main(){
	int mat[3][3]={1,2,3,4,5,6,7,8,9},temp,i,j,flag,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("lower traingular matrix\n");
	for(i=0;i<3;i++){
		flag=1;
		for(j=0;j<3;j++){
			if(i==j)
			flag=0;
			if(flag==1)
			sum+=mat[i][j];	
		}	
	}
	printf("%d",sum);
	
	
	
}
