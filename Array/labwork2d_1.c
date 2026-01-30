#include<stdio.h>
int main() {
	
	int row,column,i,j,a[row][column],sum=0;
	
	printf("enter your row size:");
	scanf("%d",&row);
	
	printf("enter your column size:");
	scanf("%d",&column);
	
	printf("\nenter arry's element:");
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\na[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	printf("\n%d",sum);
	
	float avg= (float)sum / (row*column);
	
	printf("\nyour average is=%.2f",avg);
	
	
	
	
	
	return 0;
}
