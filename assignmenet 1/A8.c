#include<stdio.h>
int main (){
   int a,year,week,day;
   scanf("%d",&a);
   year=a/365;
   a=a%365;
   week=a/7;
   a=a%7;
   day=a;
   printf("Year :%d\n",year);
   printf("Week:%d\n",week);
   printf("Day :%d",day);
   
   return 0;
   	
}
