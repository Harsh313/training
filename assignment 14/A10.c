#include<stdio.h>
struct time{
	int hour,min,sec;
};
void add(struct time a,struct time b){
	int total1 = a.hour*3600+a.min*60+a.sec;
	int total2 = b.hour*3600+b.min*60+b.sec;
	int res = total1+total2;
	int hrs=res/3600,mins,secs;
	res%=3600;
	mins=res/60;
	secs=res%60;
	printf("\n added time %d hrs %d min %d sec\n",hrs,mins,secs);
}
void sub(struct time a,struct time b){
	int total1 = a.hour*3600+a.min*60+a.sec;
	int total2 = b.hour*3600+b.min*60+b.sec;
	int res = total1-total2;
	int hrs=res/3600,mins,secs;
	res%=3600;
	mins=res/60;
	secs=res%60;
	printf("\n subtracted time %d hrs %d min %d sec\n",hrs,mins,secs);
}
int main(){
	struct time a={10,20,50};
	struct time b={5,30,40};
	add(a,b);
	sub(a,b);
}
