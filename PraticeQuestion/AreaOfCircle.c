#include <stdio.h>

int main(){
	int area, pi=3.14,r,i;
	for(i =0;i<5;i++){
	printf("Enter the Radius \n");
	scanf("%d", &r);
	area = pi *r *r;
	printf("The area of circle is %d\n", area);
}
return 0;
}
