#include <stdio.h>

int evaluateCostOfOil(){
	int cost, i;
	printf("Enter the Cost of Oil\n");
	scanf("%d",&cost);
	return cost;
}
void displayResult(){
	if(evalucateCostOfOil() < 200){
		 printf("Expensive oil");
	}
	
}

int main(){
	evaluateCostOfOil();

	
	
}
