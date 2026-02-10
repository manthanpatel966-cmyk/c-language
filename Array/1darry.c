#include<stdio.h>
int main(){
	
	int num[10] = {50,55,22,23,61,0,-22,-21,11,-65};
    int i;
    
    printf("Negative Numbers:"); 
    for(i=0;i<10;i++){
    	if(num[i] < 0){
    		printf(" %d ",num[i]);
		}
	}
	printf("\nPositive Numbers:");
	for(i=0;i<10;i++){
    	if(num[i] > 0){
    		printf(" %d ",num[i]);
		}
	}
	printf("\nZero Numbers:");
	for(i=0;i<10;i++){
    	if(num[i] == 0){
    		printf(" %d ",num[i]);
		}
	}
	
	return 0;
}
