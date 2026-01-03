#include<stdio.h>
#include<conio.h>
int main() {
	 
	 int i,user,sum=0;
	 
	 printf("enter your odd number:");
	 scanf("%d",&user);
	 
	 for(i=1;i<=user;i++){
	 	if(i % 2 != 0){
	 		sum=sum+i;
		 }
	 }
	 printf("your %d sum is=%d",user,sum);
	 
	 printf("\nenter your even number:");
	 scanf("%d",&user);
	 
	  sum=0;
	 
	 for(i=2;i<=user;i++){
	 	if(i % 2 == 0){
	 		sum=sum+i;
		 }
	 }
	 printf("your %d sum is=%d",user,sum);
	 

	
	return 0;
}
