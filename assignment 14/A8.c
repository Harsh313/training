#include<stdio.h>
#include<math.h>
struct point {
	int x,y;
};
double distance(struct point a,struct point b){
	int m=a.x-b.x;
	int n = a.y-b.y;
	double ans=sqrt((m*m)+(n*n));
	return ans;
}
int main(){
	struct point a={6,3};
	struct point b={2,2};
	printf("distance between the two points are %.2f",distance(a,b));
	return 0;
}
