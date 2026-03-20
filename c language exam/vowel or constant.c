#include<stdio.h>
int main(){
	
	char ch;
	
	printf("enter your character:");
	scanf("%c",&ch);
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			
			printf("\nThe character is vowel..");
			break;
			
			default:
	        printf("\nThe character is constant..");
	}
	
	return 0;
}
