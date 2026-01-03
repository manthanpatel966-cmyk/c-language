#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,user,sum=0;
	
	printf("enter end point:");
	scanf("%d",&user);
	
	for(i=1;i<=user;i++){
		
//		printf("%d",i);
		sum=sum+i;
	}
	printf("answer of sum is=%d",sum);
	
	
	return 0;
}
