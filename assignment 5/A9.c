#include<stdio.h>
#include<math.h>
int main(){
	int arr[5],i,sum=0;
	int per;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	per=sum/5;
	printf("Percentage =%d\n Grade=",per);
//	if(per>=90)printf("A");
//	else if(per>=80)printf("B");
//	else if(per>=70)printf("C");
//	else if(per>=60)printf("D");
//	else if(per>=50)printf("E");
//	else printf("F");
	switch(per/10){
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		case 5:
			printf("E");
			break;
		default:
			printf("F");
			break;
	}
	
	return 0;
}
