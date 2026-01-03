#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,user;
	
	printf("enter your even number:");
	scanf("%d",&user);
	
	   for(i=2;i<=user;i++){
		if(i % 2 ==0){
			printf(" %d",i);
		}
	}
	
	
	
	return 0;
}
