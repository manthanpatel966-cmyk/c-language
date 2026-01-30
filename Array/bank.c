#include<stdio.h>

int main() {
	
	char correctusername[50]="manthanpatel.dev";
	char correctpassword[50]="5517@dev";
	
	char username[50],password[50];
	
	printf("enter username:");
	scanf("%s",username);
	
	printf("enter password:");
	scanf("%s",password);
	
	if(strcmp(correctusername,username) == 0 && strcmp (correctpassword,password) == 0){
		printf("\n login successfully.");
		printf("\nwelcome to the my dev++");
	}
	else{
		printf("\nincorrect username & password !!");
	}
	
	
		
	return 0;
}
