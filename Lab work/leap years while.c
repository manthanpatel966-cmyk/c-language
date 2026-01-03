#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,user1,user2;
	
	printf("enter any number:");
	scanf("%d",&user1);
	
	printf("enter any number:");
	scanf("%d",&user2);
	
	i=user1;
	
	while(i<=user2){
		if(i % 4 ==0  &&  i % 100 !=0){
			
			printf(" %d",i);
	
	}
	        i++;
	}
	
	
	return 0;
}
