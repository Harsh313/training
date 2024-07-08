#include<stdio.h>
int main (){
   int min,hr,hrmin;
   scanf("%d",&min);
   hr=min/60;
   hrmin=min%60;
   printf("%d Hour %d Minutes",hr,hrmin);
   
   return 0;
   	
}
