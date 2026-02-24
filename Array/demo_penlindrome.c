#include<stdio.h>
#include<string.h>

int main(){
	
	char data[50];
	int i,length=0,user=1;
	
	printf("enter your data:");
	scanf("%s",data);
	
	while(data[length] != '\0'){
		length++;
	}
	
	printf("\nyour length is=%d",length);
	
	for(i=0;i<length / 2;i++){
		if(data[i] != data[length -i -1])
		{
			user=0;
			break;
			
		}
	}
	if(user ==1){
		printf("\nyour number is pelindrome..");
	}
	else{
		printf("\nyour number is not pelindrome..");
	}
	
	
	return 0;
}
