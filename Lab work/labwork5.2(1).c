#include<stdio.h>
#include<conio.h>
int main() {
	int num1,num2,num3;
	
	printf("enter a value of the first number:");
	scanf("%d",&num1);
	
	printf("enter a value of the second number:");
	scanf("%d",&num2);
	
	printf("enter a value of the third number:");
	scanf("%d",&num3);
	
	if(num1<num2) {
		printf("the minimum value is:%d",num1);
	}
	else if(num2<num3){
		printf("the minimum value is:%d",num2);
	}
	else{
		printf("the minimum value is:%d",num3);
	}
	return 0;
}
