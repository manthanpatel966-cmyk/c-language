#include<stdio.h>
#include<string.h>
int main() {
	
	char username[50];
	
	printf("enter your username:");
	scanf("%s",username);
	
	strlwr(username);
	printf("\nyour user name is:%s",username);
	
	
	return 0;
}
