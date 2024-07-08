#include<stdio.h>
#include<math.h>
int main(){
	int P,T;
	float R;
	double CI;
	scanf("%d",&P);
	scanf("%d",&T);
	scanf("%f",&R);
	R=1+(R/100);
	CI=P*(pow(R,T));
	printf("Compound Interest = %f",CI);
	return 0;
}
