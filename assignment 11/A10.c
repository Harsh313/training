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
		sum=0;
		for(j=0;j<3;j++){
			
			sum+=arr1[i][j];
		}
		printf("\n sum of %d row is %d",i+1,sum);
	}
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			
			sum+=arr1[j][i];
		}
		printf("\n sum of %d column is %d",i+1,sum);
	}
	
	return 0;
	
}
