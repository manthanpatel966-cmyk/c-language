#include<stdio.h>
#include<string.h>

int main(){
	
	char user[100];
	char *ptr;
	
	printf("enter your string:");
	gets(user);
	
	ptr = user;
	
    printf("your string length is=%d",strlen(ptr));
	
	
	
	
	
	return 0;
}
