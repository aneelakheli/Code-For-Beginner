#include <stdio.h>

int main(){
	int cal ,num1, num2,num3, sum, sub,multiply;
	printf("Enter the First Number:\n");
	scanf("%d",&num1);
	printf("Enter the second Number:\n");
	scanf("%d",&num2);
	printf("Enter the Third Number:\n");
	scanf("%d",&num3);
	printf("Enter the number 1,2,3, for addition subtraction and multiplication respectively:\n" );
	scanf("%d", &cal);
	switch(cal){
		case 1:
			sum = num1+ num2+num3;
			printf("The value of %d %d and %d is %d ", num1,num2,num3,sum);
			break;
		case 2:
			sub =num1-num2 -num3;
			if(sub<0){
				printf("The value of %d %d and %d is %d ", num1,num2, num3,sub);
			}
			else{
				printf("The value of %d %d and %d is %d ", num1,num2, num3,sub);
			}
			break;
		case 3:
			multiply: num1 * num2 *num3;
			printf("The value of %d and %d is %d ", num1,num2,num3 ,multiply);
			break;
			
		
	}
	
	return 0;
}
