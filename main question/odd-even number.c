#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,user;
	
	printf("enter your odd number:");
	scanf("%d",&user);
	
	   for(i=1;i<=user;i++){
		if(i % 2 !=0){
			printf(" %d",i);
		}
	}
	
	printf("\nenter your even number:");
	scanf("%d",&user);
	
	   for(i=2;i<=user;i++){
		if(i % 2 ==0){
			printf(" %d",i);
		}
	}
	
	
	
	
	
	return 0;
}
