#include<stdio.h>
struct height{
	int feet,inches;
};
void add(struct height a,struct height b){
	int total1=a.feet*12+a.inches;
	int total2=b.feet*12+b.inches;
	int sum=total1+total2;
	struct height ans;
	ans.feet=sum/12;
	ans.inches=sum%12;
	printf("The addition of the heights are %d %d\n",ans.feet,ans.inches);
	
}
void sub(struct height a,struct height b){
	int total1=a.feet*12+a.inches;
	int total2=b.feet*12+b.inches;
	int sum=total1-total2;
	struct height ans;
	ans.feet=sum/12;
	ans.inches=sum%12;
	if(ans.inches<0){
		ans.feet-=1;
		ans.inches+=12;
	}
	
	printf("The subraction of the heights are %d %d\n",ans.feet,ans.inches);

}
int main(){
	struct height a={6,2};
	struct height b={5,4};
	add(a,b);
	sub(a,b);
	return 0;
}
