#include<stdio.h>

int fact(int n);

int fact(int n){
	
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}

int main(){
	
	int n;
	
	printf("enter your number:");
	scanf("%d",&n);
	
	printf("your factorial is=%d",fact(n));
	
	return 0;
}
