#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,user,no1=0,no2=1,no3;
	
	printf("enter your number:");
	scanf("%d",&user);
	
	
	 for(i=1;i<=user;i++){
	 	printf("%d ",no1);
	 	if(no3=no1+no2){
	 		no1=no2;
	 		no2=no3;
		 }
	 }
	
	
	return 0;
}
