#include<stdio.h>
#include<conio.h>
int main() {
	
	int x,y,sub,expression;
	
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
	sub=x-y;
	
	printf("sum is=%d",sub);
	
	expression=sub*sub;
	
	printf("\nfinal answer of(x-y)^2:%d",expression);
	
	
	
	return 0;
}
