#include<stdio.h>
#include<conio.h>

int main() {
	
	float m,s,e,mark;
	
	printf("enter mark of maths=");
	scanf("%f",&m);
	
	printf("enter mark of science=");
	scanf("%f",&s);
	
	printf("enter mark of english=");
	scanf("%f",&e);
	
	mark=(m+s+e)/3;
	
	printf("average of marks=%.2f",mark);
	
	
	
	
	return 0;
}
