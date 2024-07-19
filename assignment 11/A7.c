#include<stdio.h>
int main(){
	int arr1[2][2]={1,2,3,4},arr2[2][2]={1,2,3,4},flag=0,i,j,k;
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
			if(arr1[i][j]!=arr2[i][j])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	printf("\n not equal");
	else
	printf("\n Equal");
	
}
