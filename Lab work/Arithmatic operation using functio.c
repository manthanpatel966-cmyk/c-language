#include<stdio.h>

int num1,num2;
void putnumber();
void putnumber(){
	printf("enter your number1:\n");
	scanf("%d",&num1);
	printf("enter your number2:\n");
	scanf("%d",&num2);
	
}

int Addition();
int Addition(){
	putnumber();
	printf("Addition is=%d\n",num1+num2);
}
int Substraction();
int Substraction(){
	putnumber();
	printf("substraction is=%d\n",num1-num2);
}
int Multiplication();
int Multiplication(){
	putnumber();
	printf("Multiplication is=%d\n",num1*num2);
}
int Division();
int Division(){
	putnumber();
	printf("Division is=%d\n",num1/num2);
}

int main(){
	
	Addition();
	Substraction();
	Multiplication();
	Division();
	
	
	
	return 0;
}










