#include<stdio.h>
#include<conio.h>
int main() {
	
	int first_angel,second_angel,third_angel;
	
	printf("enter your fisrt_angel:");
	scanf("%d",&first_angel);
	
	printf("enter your second_angel:");
	scanf("%d",&second_angel);
	
	third_angel=180-(first_angel+second_angel);
	
	printf(" third angel is=%d",third_angel);
	
	
	
	
	
	return 0;
}
