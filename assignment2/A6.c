#include<stdio.h>
#include<math.h>
int main(){
	int dis;
	float ans,litre;
	scanf("%d",&dis);
	scanf("%f",&litre);
	ans=dis/litre;
	printf("Average consumption (km/lt) %f",ans);
	return 0;
	
}
