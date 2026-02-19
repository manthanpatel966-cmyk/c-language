#include<stdio.h>

int addition();

int addition(){
	int n1,n2,ans;
	printf("enter your number n1:");
	scanf("%d",&n1);
	printf("enter your number n2:");
	scanf("%d",&n2);
	
	ans=n1+n2;
	
	return ans;
}

int main(){
	
	int sum;
	
	sum= addition();
	
	printf("addition is=%d",sum);
	
	return 0;
}
