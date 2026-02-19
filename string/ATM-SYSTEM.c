#include<stdio.h>

int balance = 5000;

int checkBalance(int balance);
int diposit();
int withdraw();
int enterpin,pin=5517;


int checkBalance(int balance){
		printf("\nAccount Balance:%d",balance);
}

int diposit(){
	int amount;
	printf("\nEnter an amount for diposit:");
	scanf("%d",&amount);
	
	if(amount<0){
		printf("\nError:Please enter valid amount:");
	}
	else{
		balance += amount;
		printf("\nDiposit successfully.!!");
	}
	
	return balance;
}

int withdraw(){
	int amount;
	printf("\nEnter an amount for withdraw:");
	scanf("%d",&amount);
	
	if(amount<0){
		printf("\nError:Please enter valid amount:");
	}
	else if(amount>balance){
		printf("\nError : Your account balance is too low.!");
	}
	else{
		balance -= amount;
		printf("\nWithdraw successfully.!!");
	}
	
	return balance;
}

int main(){
	
	int choice;
	
	while(1){
		printf("\n\n||-- == BANK OF BARODA ATM == --||");
		printf("\n1.checkBalance");
		printf("\n2.Diposit");
		printf("\n3.Withdraw");
		printf("\n4.Exit");
	
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
	
		switch(choice){
			case 1:
				printf("enter your Atmpin:");
	            scanf("%d",&enterpin);
	
	            if(enterpin != pin){
		        printf("\nyour atm pin is incorrect!!!");
		        
		        break;
	        }
				checkBalance(balance);
					break;
			case 2:
				printf("enter your Atmpin:");
	            scanf("%d",&enterpin);
	
	            if(enterpin != pin){
		        printf("\nyour atm pin is incorrect!!!");
		        
		        break;
	        }
				balance = diposit();
				break;
			case 3:
				printf("enter your Atmpin:");
	            scanf("%d",&enterpin);
	
	            if(enterpin != pin){
		        printf("\nSorry..your Atm pin is incorrect!!!");
		        
		        break;
	        }
				balance = withdraw();
				break;
			case 4:
				return;
		
			default:
				printf("\nError:Invalid choice..!!");
	}
	
	}
	return 0;
}
