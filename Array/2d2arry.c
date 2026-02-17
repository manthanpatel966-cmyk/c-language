#include<stdio.h>
int main(){
	int arry[3][3];
	int i,j,sum=0;
	
	printf("enter your element: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\narry[%d][%d]: ",i,j);
			scanf(" %d",&arry[i][j]);
			
			if(j == 2-i){
			sum += arry[i][j];
		}
		}
		
	}
		printf("\nsum of element is= %d",sum);
	
	return 0;
}
