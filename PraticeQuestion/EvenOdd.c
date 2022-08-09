#include <stdio.h>

int main(){
	int number,i,sum =0;
	for(i =20 ;i<50;i++){
		if(i%2==0){
			printf("%d is even number\n", i);
		}
		else if(i%2!=0){
			printf("%d is odd number\n",i);
		}
		sum=sum+i;
	}
		printf("The total sum between 20 and 50 is %d",sum );
	return 0;
}
