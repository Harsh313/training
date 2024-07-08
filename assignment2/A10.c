#include<stdio.h>
#include<math.h>
int main(){
	int p,t,r;
	float ans;
	scanf("%d",&p);
	scanf("%d",&t);
	scanf("%d",&r);
	ans=(p*t*r);
	ans/=100;
	printf("Simple Intrest = %f",ans);
	return 0;
	
}
