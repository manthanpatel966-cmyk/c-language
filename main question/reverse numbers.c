#include<stdio.h>
#include<conio.h>
int main() {
	
	int no,rev=0,rem;
	
	printf("enter your value:");
	scanf("%d",&no);
	
	while(no != 0){
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		
	}
	printf("your number is=%d",rev);
	
	
	return 0;
}
