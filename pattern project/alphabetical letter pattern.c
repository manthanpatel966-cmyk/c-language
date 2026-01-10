#include <stdio.h>
#include<conio.h>

    int main() {
    
	int i,j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 7; j++) {
            if (j == 0 || j == 6 || (i == j && j <= 3) || (i + j == 6 && j >= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


//debug:
// i=0 ? stars at j=0, j=6, diagonal start ? *     *
// i=1 ? stars at j=0, j=1, j=5, j=6 ? **   **
// i=4 ? stars only at j=0 and j=6 ? *     *
