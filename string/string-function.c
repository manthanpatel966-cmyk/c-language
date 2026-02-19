#include<stdio.h>
#include<string.h>
int main() {
	
	char username[50];
	char correctusername[50]="manthanpatel.dev";
	
	printf("enter your username:");
	scanf("%s",username);
	
	if(strcmp(username,correctusername) == 0){
		printf("\nyour username is=%s",username);
	    printf("\nlength of username is=%d",strlen(username));
	    printf("\nusername=%s",strrev(username));
	}
	else{
		printf("\nError:incorrect username!!..");
	}
	
	
	
	
	
	
	return 0;
}
