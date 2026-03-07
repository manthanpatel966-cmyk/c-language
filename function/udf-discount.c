#include<stdio.h>

int applydiscount();

int applydiscount(){
	char customername[50];
	int purchaseamount,discount=0,finalamount;
	
	printf("enter your customername:");
	scanf("%s",customername);
	
	printf("enter your purchaseamount:");
	scanf("%d",&purchaseamount);
	
	if(purchaseamount >= 5000){
		discount = purchaseamount * 0.10;
	}
	else{
		discount = purchaseamount * 0.05;
	}
	
	finalamount = purchaseamount - discount ;
	
	printf("||--- INVOICE ---||");
    printf("\ncustomername:%s",customername);
    printf("\npurchaseamount:%d",purchaseamount);
    printf("\ndiscount:%d",discount);
    printf("\n\n---------------");
    printf("\nfinalamount:%d",finalamount);
}

    



int main(){
	
	applydiscount();
	
	return 0;
}
