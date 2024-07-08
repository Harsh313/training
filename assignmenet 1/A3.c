#include<stdio.h>
int main (){
	int hr,Phr;
	char id[50];
	float salary;
	scanf("%s",&id);
	scanf("%d",&hr);
	scanf("%d",&Phr);
	salary=Phr*hr;
	printf("Employees ID =%s\n",id);
	printf("Salary =%.2f",salary);
	return 0;	
}
