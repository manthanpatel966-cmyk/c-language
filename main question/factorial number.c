#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,no,fact=1;
	
	printf("enter any number:");
	scanf("%d",&no);
	
	for(i=no;i>=1;i--){
		fact=fact*i;
	}
	printf("your factorial number %d is=%d",no,fact);
	
	
	return 0;
}
