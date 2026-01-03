#include<stdio.h>
#include<conio.h>
int main() {
	
	float p,r,n,si;
	
	printf("enter principle amount:");
	scanf("%f",&p);
	
	printf("enter rate of interest:");
	scanf("%f",&r);
	
	printf("enter time:");
	scanf("%f",&n);
	
	si=p*r*n/100;
	printf("simple interest =%2f",si);
	
	
	return 0;
}
