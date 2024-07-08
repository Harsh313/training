#include<stdio.h>
#include<math.h>
int main(){
	int side;
	float ans;
	scanf("%d",&side);
	ans=(sqrt(3)/4);
	ans=ans*side*side;
	printf("Area of equilateral triangle = %.1f sq. units",ans);
	return 0;
}
