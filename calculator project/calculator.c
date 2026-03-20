#include<stdio.h>

void Calculator(int choice,int F_num,int S_num){
	
	switch(choice){
		case 1:
			printf("the Addition of %d and %d is = %d",F_num,S_num,F_num + S_num);
			break;
		case 2:
		    printf("The Subtraction of %d and %d is = %d",F_num,S_num,F_num - S_num);
			break;
		case 3:
		    printf("The Multiplication of %d and %d is = %d",F_num,S_num,F_num * S_num);
			break;
		case 4:
			if(S_num != 0){
				printf("The Division of %d and % d is = %d",F_num,S_num,F_num / S_num);
			}
			else{
				printf("Error: Not Divisable by Zero.");
			}
			break;
		case 5:
			if(S_num != 0){
				printf("The Modulo of %d %% %d is = %d",F_num,S_num,F_num % S_num);
			}
			else{
				printf("Error: modulo by Zero not allowed");
			}
			break;
		default:
		       printf("Invalid Choice:");			
	}
	
}

 int main (){
	int choice = 0,F_num,S_num;
	
  while(1){
		printf("\n\nPress 1 for +");
	printf("\nPress 2 for -");
	printf("\nPress 3 for *");
	printf("\nPress 4 for /");
	printf("\nPress 5 for %%");
	printf("\nPress 0 for the exit");
	
	printf("\n\nEnter Your Choice:");
	scanf("%d",&choice);
	
	if(choice == 0){
		printf("Exiting Program.");
		exit(0);
	}
	
	printf("\nEnter the First num:");
	scanf("%d",&F_num);
	
	printf("\nEnter the Second num:");
	scanf("%d",&S_num);
	
	Calculator(choice,F_num,S_num);
}
	
	return 0;
}
