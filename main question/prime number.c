#include<stdio.h>
#include<conio.h>
int main () {
	
	int i,user,temp=0;
	
	printf("enter your number:");
	scanf("%d",&user);
	
	for(i=1;i<=user;i++){
		if(user % i == 0){
			temp++;
		}
	}
	if(temp==2){
		printf("this is prime number",user);
	}
	else{
		printf("not prime",user);
	}
	
	
	return 0;
}
