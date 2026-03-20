#include<stdio.h>
void cube(int *ptr,int row,int column){
	int i,j;
	
	printf("cube of all element:\n");
	for(i=0;i<row;i++){
	 for(j=0;j<column;j++){
	 	int val = *(ptr+i*column+j);
	 	printf("%d ",val*val*val);
	 }
	 printf("\n");
	}
}
int main(){
	int i,j,row,column;
	
	printf("Enter Arry's size:");
	scanf("%d %d",&row,&column);
	
	int a[row][column];
	
	printf("Enter Arry's Elements:");
	
	for(i=0;i<row;i++){
	 for(j=0;j<column;j++){
	 	printf("\na[%d][%d]=",i,j);
	 	scanf("%d",&a[i][j]);
	 }	
	}
	
	cube(&a[0][0],row,column);
	
	return 0;
}
