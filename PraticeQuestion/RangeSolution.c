#include <stdio.h>

int main(){
	int range;
	printf("Enter the Number to find the Range:\n");
	scanf("%d", &range);

	switch(range){
	case 500 ... 1000 :
		printf("The number lies in 500 -1000 range\n");
		break;
	case 1001 ...2000 :
		printf("The number lies in 1000 -2000 range\n");
		break;
	}
	return 0;
		
}
