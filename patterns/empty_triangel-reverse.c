#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,j,row=4;
	
	for(i=row;i>=1;i--){
		for(j=1;j<=row-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j==1 || j==2*i-1 || i==row){
				printf("*");
			}
		else{
			printf(" ");
		}
	}
		printf("\n");
	}
		
		
	
	
	
	return 0;
}
