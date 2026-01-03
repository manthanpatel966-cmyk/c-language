#include<stdio.h>
#include<conio.h>
int main() {
	
	int number1,number2;
	
	
	printf("enter value of number 1:");
	scanf("%d",&number1);
	
	printf("enter value of number 2:");
	scanf("%d",&number2);
	
	if(number1 <number2){
		printf("The minimum value is=%d",number1);
	}
	
	else if(number1==number2){
		printf("Both are same:");
	}
	
	else{
		printf("the minimum value is=%d",number2);
	}
	
	
	
	
	
	return 0;
}
