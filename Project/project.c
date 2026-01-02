#include<stdio.h>
#include<conio.h>
int main() {
	
	int score;
	char grade;
	
	printf("enter your score 0-100=");
	scanf("%d",&score);
	
	grade=(score<=100 && score>90)? 'a':
	      (score<90 && score>=80)? 'b':
	      (score<80 && score>=70)? 'c':
	      (score<70 && score>=60)? 'd':
	      (score<60 && score>=40)? 'e':
	      (score<40 && score>=0)? 'f': printf("enter valid score");
	
	
//	printf("your grade is:%c",grade);
	
	switch(grade){
		
		case 'a': printf("your grade is:%c Excellent work",grade);
		          break;
		
		case 'b': printf("your grade is:%c Well done",grade);
		          break;
		          
		case 'c': printf("your grade is:%c Good job",grade);
		          break;
		
		case 'd': printf("your grade is:%c you passed but you could do better",grade);
		          break;
		
		case 'e': printf("your grade is:%c still you passed",grade);
		          break;
		
		case 'f': printf("your grade is:%c fail",grade);
		          break;
		
	}
	
	  if(score<=100 && score>=40){
	  	printf(" you are eligible for the next level");
	  }
	  else{
	  	printf(" please try again next time");
	  }
	
	
	return 0;
}
