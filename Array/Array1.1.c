#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,practical_marks[5];
	
	printf("enter your marks:\n");
	
	for(i=0;i<=4;i++){
		scanf("%d",&practical_marks[i]);
	}
	
	printf("practical exam marks=");
	
	for(i=0;i<=4;i++){
		printf(" %d",practical_marks[i]);
	}
	
	
	return 0;
}
