#include <stdio.h>

void compareOil(cost){
	if(cost>150){
		printf("The cost is expensive");
	}
	else{
		printf("The cost is not expensive");
	}
	
}


int main(){
	int cost;
	printf("Enter the cost of Oil:\n");
	scanf("%d", &cost);
	compareOil(cost);
}
