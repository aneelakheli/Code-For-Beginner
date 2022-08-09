#include <stdio.h>

int main(){
	int n1,n2,i;
	printf("Enter the First number:\n");
	scanf("%d", &n1);
	printf("Enter the Second number:\n");
	scanf("%d", &n2);
	for(i=n1;i<=n2;i++){
		printf("The value is %d \n",i);
	}
	return 0;
}
