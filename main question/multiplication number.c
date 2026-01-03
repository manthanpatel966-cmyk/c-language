#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,no,first;
	
	printf("enter your number:");
	scanf("%d",&no);
	
	for(i=1;i<=10;i++){
		
		first=no*i;
		printf("%d x %d=%d\n",no,i,first);
	}
	

	
	
	
	return 0;
}
