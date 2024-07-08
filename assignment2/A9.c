#include<stdio.h>
#include<math.h>
int main(){
	float fahrenheit, celsius;
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("Celsius: %f ", celsius);
   return 0;
}
