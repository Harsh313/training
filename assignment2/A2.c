#include<stdio.h>
#include<math.h>
int main(){
	int a[5],avg,i,sum=0;
	float percent;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/5;
	percent=(sum*100)/500;
	printf("Total = %d\n",sum);
	printf("Average = %d\n",avg);
	printf("Percentage = %.2f",percent);
	return 0;
	
	
}
