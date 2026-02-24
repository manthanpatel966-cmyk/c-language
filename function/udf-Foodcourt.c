#include<stdio.h>

int qty,choice,price,total=0;

void Foodorder(){
	price=0;
	
	printf("\nenter your choice:");
	scanf("%d",&choice);
	
	printf("\nenter your qty:");
	scanf("%d",&qty);
	
	switch(choice){
		case 1:price = 399;break;
		case 2:price = 299;break;
		case 3:price = 199;break;
		case 4:price = 99;break;
		case 5:return;break;
	}
	
	total += price * qty;
}

int main(){
	
	printf("\n || FOOD COURT ||");
	printf("\n1.pizza = 399");
	printf("\n2.sandwich = 299");
	printf("\n3.Burger = 199");
	printf("\n4.Pasta = 99");
	printf("\n5.Exit");
	
	Foodorder();
	
	printf("\nyour total is=%d",total);
	
	Foodorder();
	
	printf("\nyour total is=%d",total);
	
	return 0;
}
