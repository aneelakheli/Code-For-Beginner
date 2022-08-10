//Created by Anil Akheli
//A program to demonstrate takes the user input for choice
//	if 1 is entered
//		calculate the total mark obtained by students in three subjects
//		display the total mark
//		find and display the division of that student
//	if 2 is enetered
//		calculate the due amount the student needs to pay
//		(hint: declare the variable for the initial amount and ask to enter the amount they intend to
//pay and find the difference)

#include <stdio.h>

int main(){
	int obtainedMarks, i, Choice, totalMarks=0, averageMarks, amount, totalAmount=120000, dueAmount;
	printf("Please choose the Number.\n");
	scanf("%d",&i);
	switch (i){
	case 1:
		for(i =0;i<3;i++){	
		printf("Enter the Student obtained Marked.\n");
		scanf("%d", &obtainedMarks);
		totalMarks = totalMarks +obtainedMarks;
	}
	printf("The total marks is %d\n", totalMarks);
	averageMarks = totalMarks/3;
		switch(averageMarks){
			case 80 ...100:
				printf("Congratulations!! You are passed with Distinction.\n");
				break;
		    case 60 ...79:
				printf("Congratulation!! You are passed with First Division.\n");
				break;
		   	case  50 ...59:
		   		printf("Congratulation!! You are passed with First Division.\n");
		   		break;
		   	default:
		  		printf("Sorry!! You are Failed.\n");
		   }
	case 2:
		printf("Enter the Amount that you want to pay.\n ");
		scanf("%d", &amount);
		dueAmount = totalAmount - amount;
		if(dueAmount <totalAmount){
			printf("Your due Amount is %d\n", dueAmount);
		}
		else{
			printf("You don't have due Amount.\n");
		}
		break;
		}
	return 0;
}
