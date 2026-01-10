#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,j,space;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(space=1;space<=(5-i)*2;space++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}


//debug:
// i=1  1<=5  j=1  1<=1  print:1  space=1  1<=8  print:8 spaces  j=1  1>=1  print:1
// i=2  2<=5  j=1  1<=2  print:1 2  space=1  1<=6  print:6 spaces  j=2  2>=1  print:2 1
// i=5  5<=5  j=1  1<=5  print:1 2 3 4 5  space loop false  j=5  5>=1  print:5 4 3 2 1
