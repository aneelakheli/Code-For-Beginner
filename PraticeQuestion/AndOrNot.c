#include <stdio.h>

int main(){
	int guess= 9 , num, count;
	for(count =1;count <=3; count++){
	printf("Enter the number:\n");
	scanf("%d", &num);
		if(num != guess){
			printf("Not Correct..");
			
		}
		else if(num>0 &&num<=5){
			printf("Number is too low");
			
		}
		else if(num ==guess){
			printf("Number is correct");
			break;
		}
	}
	return 0;
}
