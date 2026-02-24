#include<stdio.h>

int main(){
	
	char str[50];
	int i;
	int freq[256] = {0};
	
	printf("enter your string:");
	scanf("%s",str);
	
	for(i=0;str[i] != '\0';i++){
		freq[(int)str[i]]++;
	}h
	
	for(i=0;str[i] != '\0';i++){
		if(freq[(int)str[i]] != 0){
			printf("\n%c - %d:",str[i],freq[(int)str[i]]);
		}
		freq[(int)str[i]] = 0;
	}
	
	
	
	
	
	return 0;
}
