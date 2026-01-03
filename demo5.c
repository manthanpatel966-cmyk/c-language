#include<stdio.h>
#include<conio.h>
int main() {
	
	int x,y;
	
	printf("enter value of x=");
	scanf("%d",&x);
	
	printf("enter value of y=");
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("after swapping:\n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	
	
	
	
	return 0;
}
