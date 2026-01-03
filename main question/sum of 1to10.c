#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,user,sum=0;
	
	printf("enter your number:");
	scanf("%d",&user);
	
	for(i=1;i<=user;i++){
		sum=sum+i;
	}
	printf("your sum is=%d",sum);
	
	
	return 0;
}
