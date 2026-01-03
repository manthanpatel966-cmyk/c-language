#include<stdio.h>
#include<conio.h>
int main() {
	
	int x,y,temp;
	
	printf("enter value of x:");
	scanf("%d",&x);
	
	printf("enter value of y:");
	scanf("%d",&y);
	
	
	temp=x;
	x=y;
	y=temp;
	
	printf("after swaping:\n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	
	
	return 0;
}
