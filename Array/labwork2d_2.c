#include<stdio.h>
int main() {
	
	int row,column,i,j;
	
	printf("enter your row:");
	scanf("%d",&row);
	
	printf("enter your column:");
	scanf("%d",&column);
	
	printf("\nenter a arry's element");
	
	int a[row] [column],b[row][column],c[row][column];
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nenter b arry's element");
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}
