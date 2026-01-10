#include<stdio.h>
#include<conio.h>
int main() {
	
	int i,j;
	
	for(i=41;i<=45;i++){
		for(j=41;j<=i;j++){
			printf(" %d",j);
		}
		printf("\n");
	}
	
	return 0;
}

//debug:
// i=41  41<=45  j=41  41<=41  print:41
// i=42  42<=45  j=41  41<=42  print:41  j=42  42<=42  print:42
// i=45  45<=45  j=41  41<=45  print:41  j=42  42<=45  print:42  
//      j=43  43<=45  print:43  j=44  44<=45  print:44  j=45  45<=45  print:45
