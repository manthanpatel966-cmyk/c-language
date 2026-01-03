#include<stdio.h>
#include<conio.h>
int main(){
	
	int no,rem,count=0;
	
	printf("enter your number:");
	scanf("%d",&no);
	
	while(no != 0){
		rem=no%10;
		count++;
		no=no/10;	
	}
	printf("your answer is=%d",count);
	
	return 0;
}


//debug:
//step-1:declare three variable
//step-2:take a number from user
//step-3:until the no not equal 0 the loop will continue
//step-4:rem will find the reminder and count will count.
//step-4:no/10 remove the last digit because it's int and loop will continue.
//step-5:print the total no of digits.
