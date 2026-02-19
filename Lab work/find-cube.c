#include<stdio.h>

void cube(int n);

void cube(int n){
	printf("enter your number:");
	scanf("%d",&n);
	
	printf("cube is=%d",n*n*n);
}

int main(){
	
	int n;
	
	cube(n);
	
	
	return 0;
}
