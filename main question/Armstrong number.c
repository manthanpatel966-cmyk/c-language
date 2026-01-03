#include<stdio.h>
#include<conio.h>
int main() {
	
	int no,count=0,rem;
	
	printf("enter your number:");
	scanf("%d",&no);
	int x=no;
	
	while(no != 0){
		rem=no%10;
		count=count+rem*rem*rem;
		no=no/10;
	}
	printf("your number is=%d",count);
	
	if(x == count){
		printf("\n%d armstrong number",x);
    }
	else{
		printf("\n%d not armstrong number",x);
	}
	
	
	return 0;
}
