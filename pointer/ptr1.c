#include<stdio.h>

int main(){
	
	int a = 50, b= 60;
	int *ptr;
	
	ptr = &a;
	
	printf("your a is=%d",a);
	printf("\nyour address of a is=%u",&a);
	printf("\nAdress of ptr=%u",ptr);
	printf("\nvalue of ptr=%u",&ptr);
	printf("\nvalue of *ptr=%d",*ptr);
	
	return 0;
}
