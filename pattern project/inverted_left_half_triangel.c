#include <stdio.h>
#include<conio.h>

int main() {
    int i, j,space,row=5;

    for (i = 5; i >= 1; i--) {
    	for(space=1;space<=row-i;space++){
    		printf(" ");
		}
    	
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}

//debug:
// i=5  5>=1  space=1  1<=0 FALSE  j=1  print:1  j=2  print:0  j=3  print:1  j=4  print:0  j=5  print:1
// i=4  4>=1  space=1  1<=1 TRUE  print:1 space  j=1  print:1  j=2  print:0  j=3  print:1  j=4  print:0
// i=1  1>=1  space=1  1<=4 TRUE  print:4 spaces  j=1  print:1
