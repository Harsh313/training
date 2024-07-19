#include<stdio.h>
int main(){
	int arr[10],freq[10],i,j,count,n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i =0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				freq[j]=-1;
			}
		}
		if(freq[i]!=-1)
		freq[i]=count;
	}
	for(i=0;i<n;i++){
		if(freq[i]!=-1){
			printf("frequency of the number %d is %d\n",arr[i],freq[i]);
		}
	}
	return 0;	
}

