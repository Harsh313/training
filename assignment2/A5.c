#include<stdio.h>
#include<math.h>
int main(){
	float w1,w2,p1,p2,sum ,avg;
	scanf("%f",&w1);
	scanf("%f",&p1);
	scanf("%f",&w2);
	scanf("%f",&p2);
	sum=(w1*p1)+(w2*p2);
	p1+=p2;
	avg=sum/p1;
	printf("Average Value = %f",avg);
	return 0;
}
