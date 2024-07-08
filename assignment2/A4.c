#include<stdio.h>
#include<math.h>
int main(){
	char ch[3],temp;
	int i,j;
	
		  for (i = 0; i < 3; i++) {
        scanf(" %c", &ch[i]);
    }		
	
	i=0,j=2;
	while(i<j){
		temp=ch[i];
		ch[i]=ch[j];
		ch[j]=temp;
		i++;
		j--;
	}
	 for (i = 0; i < 3; i++) {
        printf("%c", ch[i]);
    }
	return 0;
}
