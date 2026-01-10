#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,j,count=11;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf(" %d",count);
			count++;
		}
		printf("\n");
	}
	
	
	return 0;
}

//Debug:
// i=1  1<=4  j=1  1<=1  print:11  count=12
// i=2  2<=4  j=1  1<=2  print:12  j=2  2<=2  print:13  count=14
// i=4  4<=4  j=1  1<=4  print:17  j=2  2<=4  print:18  j=3  3<=4  print:19  j=4  4<=4  print:20  count=21
// i=5  5<=4  FALSE 
