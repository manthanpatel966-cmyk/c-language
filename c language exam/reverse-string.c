#include<stdio.h>

void reverse(char str[]){
	int i,length = 0;
	char temp;
	
//	length find
	while(str[length] != '\0'){
		length++;
	}
	
//	string reverse
	for(i=0;i< length/2;i++){
		temp=str[i];
		str[i]=str[length - i -1];
		str[length - i - 1] = temp;
	}
		
}

int main(){
	
	char str[100];
	
	printf("enter a string:");
	scanf("%s",str);
	
	reverse(str);
	
	printf("your reverse string is=%s",str);
	
	
	return 0;
}
