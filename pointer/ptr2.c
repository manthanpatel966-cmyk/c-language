#include<stdio.h>

int main(){
	
	int a[5],*ptr,i;
	
	ptr = a;
	
	for(i=0;i<5;i++){
		printf("enter your number:[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n%d = %d",a[i],(*ptr) * (*ptr));
		ptr++;
	}
	
	
	
	return 0;
}
