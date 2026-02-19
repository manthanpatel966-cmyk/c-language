#include<stdio.h>

void addition(){
	int a,b;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	printf("\nAddition is=%d",a+b);
}
	
	int main(){
		
		addition();
		printf("\nHello students\n");
		addition();
		
		return 0;
		
}
