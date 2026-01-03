#include<stdio.h>
#include<conio.h>
int main() {
	
	int x,y,sum,expression;
	
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
	sum=x+y;
	
	printf("sum is=%d",sum);
	
	expression=sum*sum*sum;
	
	printf("\nfinal answer of(x-y)^2:%d",expression);
	
	
	
	return 0;
}
