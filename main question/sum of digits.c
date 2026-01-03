#include<stdio.h>
#include<conio.h>
int main() {
	
	int no,rem,sum=0;
	
	printf("enter your number:");
	scanf("%d",&no);
	
	while(no != 0){
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("your sum is=%d",sum);

	
	
	return 0;
}
