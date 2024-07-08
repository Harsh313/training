#include<stdio.h>
int main (){
  int num ,hr,min,sec;
  scanf("%d",&num);
  hr=num/3600;
  num%=3600;
  min=num/60;
  sec=num%60;
  printf("H:M:S - %d:%d:%d",hr,min,sec);
   
   return 0;
   	
}
