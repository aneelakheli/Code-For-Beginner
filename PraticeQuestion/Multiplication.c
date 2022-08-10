//Created by Anil Akheli
//A program to handle the multiplication table of n using while loop
//	n be the user input whose table the user need

#include <stdio.h>

int main(){
	int number ,i=1,multiply;
	printf("Enter the Number:\n");
	scanf("%d", &number);
	while(i<11){
		multiply = i * number;
		printf(" %d * %d = %d \n", number, i, multiply);
		i++;
	}
	return 0;
}
