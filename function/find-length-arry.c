#include<stdio.h>

void findlength(char name[]);

void findlength(char name[]){
	int i,length=0;
	
	for(i=0;name[i] != '\0';i++){
		length++;
	}
	printf("\nyour name is:%s",name);
	printf("\nyour length is:%d",length);
}

int main(){
	
	char n[50];
	
	printf("enter your name:");
	scanf("%s",n);
	
	findlength(n);
	
	
	return 0;
}
