#include<stdio.h>
#include<conio.h>
int main() {
	
	int no,first,last;
	
	printf("enter your number:");
	scanf("%d",&no);
	
	last=no%10;
	while(no>=10){
		no=no/10;
	}
	first=no;
	printf("your first and last digit is=%d",first+last);
	
	
	return 0;
}


//debug:
//step-1 : take int no,first,last
//step-2: if the no is 125 then 125%10=5
//step-3: until the no is greater than 10 loop will continue 125/10=12 and continue
//step-4: at last single digit no find and first=no
