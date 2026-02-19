#include<stdio.h>
#include<string.h>
int main(){
	
	char username[50];
	char greetmsg[50]=" Hello ";
	
	printf("enter your username:");
	gets(username);
	
	printf("%s",strcat(greetmsg,username));
	
	
	return 0;
}
