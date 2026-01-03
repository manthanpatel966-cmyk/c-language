#include<stdio.h>
#include<conio.h>
int main() {
	
	int no,rem,count=0;
	
	printf("enter your number:");
	scanf("%d",&no);
	
	while(no != 0){
		rem=no%10;
		count+1;
		no=no/10;
	}
	printf("your answer is=%d",count);

	
	
	return 0;
}
