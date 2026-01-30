#include<stdio.h>
int main() {
	
	int i,j,row,column,sum=0;
	
	printf("enter row and column number:");
	scanf("%d %d",&row,&column);
	
	int a[row][column];
	printf("\nenter arry's element");
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\na[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			
			if(i+j == row-1){
				sum=sum+a[i][j];
			}
		}
	}
	printf("your answer is=%d",sum);
	
	return 0;
}
