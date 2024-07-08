#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2,temp1,temp2;
	float ans;
	scanf("%d",&x1);
	scanf("%d",&y1);
	scanf("%d",&x2);
	scanf("%d",&y2);
	temp1=pow((x1-x2),2);
	temp2=pow((y1-y2),2);
	ans=sqrt(temp1+temp2);
	printf("Distance between the said points: %f",ans);
	
	return 0;
	
}
