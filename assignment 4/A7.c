#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float d,root1,root2;
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4*a*c);
	b*=-1;
	d=sqrt(d);
	root1=(b+d)/(2*a);
	root2=(b-d)/(2*a);
	printf("root1 =%f\n",root1);
	printf("root2 =%f\n",root2);
	return 0;
}
