#include<stdio.h>
int main(){
	
	int arry[100],i,n,max;
	
	printf("enter your number:");
	scanf("%d",&n);
	
	printf("enter %d elements:\n",n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arry[i]);
	}
	
	max = arry[0];
	
	for(i=1;i<n;i++){
		if(arry[i] > max){
			max = arry[i];
		}
	}
	
	printf("your largest element is=%d",max);
	
	return 0;
}
