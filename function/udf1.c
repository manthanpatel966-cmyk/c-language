#include<stdio.h>

void squre();

void squre(){
	int num;
	printf("\nenter your number:");
	scanf("%d",&num);
	
	printf("\nsqure is:%d",num*num);
}



int main(){
	
	squre();
	squre();
	
	return 0;
}
