#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,j,space;
	
	for(i=5;i>=1;i--){
		for(space=1;space<=i;space++){
		printf(" ");
    	}
    	for(j=i;j<=5;j++){
    		printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}

//debug:
// i=5  5>=1  space=1  1<5  print:4 spaces  j=5  5<=5  print:5
// i=4  4>=1  space=1  1<4  print:3 spaces  j=4  4<=5  print:4 5
// i=1  1>=1  space loop false  j=1  1<=5  print:1 2 3 4 5 
