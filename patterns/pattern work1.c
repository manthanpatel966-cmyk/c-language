#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,j,user;
	
	printf("enter your number:");
	scanf("%d",&user);
	
	for(i=user;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
