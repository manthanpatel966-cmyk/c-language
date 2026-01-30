#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,a1[5],a2[5],a3[5];
	
	printf("enter your a1:\n");
	
	for(i=0;i<=4;i++){
		scanf("%d",&a1[i]);
	}	
	
	printf("enter your a2:\n");
	
	for(i=0;i<=4;i++){
		scanf("%d",&a2[i]);
	}
	
	printf("first array:");
	for(i=0;i<=4;i++){
		printf("%d",a1[i]);
	}
	
	printf("second array:");
	for(i=0;i<=4;i++){
		printf("%d",a2[i]);
	}
//	store
	for(i=0;i<=4;i++){
		a3[i]=a1[i]+a2[i]
	}
	
	printf("your answer is=");
	
	for(i=0;i<=4;i++){
		printff("%d",a3[i]);
	}	
	
	
	return 0;
}
