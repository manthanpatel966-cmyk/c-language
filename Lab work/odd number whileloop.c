#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,no;
	
	printf("enter any number:");
	scanf("%d",&no);
	
	i=no;
	
	while(i>=1){
		if(i % 2 !=0){
			
		printf("%d",i);
	}
	    i--;
	}
	
	
	return 0;
}
