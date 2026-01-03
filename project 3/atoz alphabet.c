#include<stdio.h>
#include<conio.h>
int main() {
	
	char i='a';
	
	do{
		printf(" %c",i);
	    i=i+4;
	}while(i<='z');
	
	
	return 0;
}

//debug:
//step-1: start char i='a'
//step 2: do while loop
//step 3: print :a 
//step 4: i=e ,i=e ,i=m ,i=q ,i=u ,i=y
//step 5: e<=z true m<=z true q<=z true u<=z true y<=z true 
//step 6: print:
