#include<stdio.h>
int main (){
   int a100,a50,a20,a10,a5,a1,num;
   scanf("%d",&num);
   a100=num/100;
   num%=100;
   a50=num/50;
   num%=50;
   a20=num/20;
   num%=20;
   a10=num/10;
   num%=10;
   a5=num/5;
   num%=5;
   a1=num;
   printf("%d Note(s) of 100.00\n",a100);
   printf("%d Note(s) of 50.00\n",a50);
   printf("%d Note(s) of 20.00\n",a20);
   printf("%d Note(s) of 10.00\n",a10);
   printf("%d Note(s) of 5.00\n",a5);
   printf("%d Note(s) of 1.00\n",a1);
   
   return 0;
   	
}
