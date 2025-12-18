#include<stdio.h>
#include<conio.h>
int main() {
	
	float b_salary,hra,da,ta;
	float g_salary;
	
	printf("enter your base salary:");
	scanf("%f",&b_salary);
	
	hra=b_salary*10/100;
	
	printf("\nenter your hra: %f",hra);
	
	da=b_salary*5/100;
	
	printf("\nenter your da: %f",da);
	
	ta=b_salary*8/100;
	
	printf("\nenter your ta: %f",ta);
	
	g_salary=b_salary+hra+da+ta;
	
	printf("\ngross salary is: %f", g_salary);
	

	
	
	return 0;
}
