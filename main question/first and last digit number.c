#include<stdio.h>
#include<conio.h>
int main() {
	
	int no, first,last;
	
	printf("enter your number:");
	scanf("%d",&no);
	
	last=no%10;
	
	while(no>=10){
		no=no/10;
		
	}
	first=no;
	printf("the sum of first and  digit=%d",first+last);
	
	
	
	return 0;
}
