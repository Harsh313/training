#include<stdio.h>
struct student{
	char grade;
	char name[20];
	int marks[3];
};
int main(){
	int i,j,k;
	struct student s[3];
	for(i=0;i<3;i++){	
	printf("enter the name of the student :-");
	scanf("%s",&s[i].name);
	printf("\n enter the grade:-");
	scanf("%s",&s[i].grade);
	printf("\nenter the marks\n");
	for(j=0;j<3;j++){
		scanf("%d",&s[i].marks[j]);
	}
}
	for(i=0;i<3;i++){
	
	printf("\noutput:-%c ",s[i].grade);
	printf("%s ",s[i].name);
	
	for(j=0;j<3;j++){
		printf(" %d ",s[i].marks[j]);
	}
}
}
