#include<stdio.h>
#include<string.h>
int main() {
	
	char username[50];
	
	printf("enter your username:");
	scanf("%s",username);
	
	printf("\nyour username is=%s",username);
	printf("\nusername=%s",strrev(username));
	
	
	
	return 0;
}
