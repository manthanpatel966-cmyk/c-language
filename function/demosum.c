#include<stdio.h>

int sumofarray(int a[],int size);

int sumofarray(int a[],int size){
	int sum=0,i;
	
	for(i=0;i<size;i++){
		sum += a[i];
	}
	
	return sum;
}

int main(){
	
	int num[5],i;
	
	for(i=0;i<5;i++){
		printf("enter your number:[%d]",i);
		scanf("%d",&num[i]);
	}
	printf("your sum is=%d",sumofarray(num,5));
	
	
	return 0;
}
