#include <stdio.h>

int getTotalMarks(int array[], int n){
	int totalMarks =0,i;
	for(i =0;i<n;i++){
		totalMarks += array[i];
	}
	return totalMarks;
}

int setPercentage(float totalMarks, float n){
	float totalNumber = n*100;
	float percentage = (totalMarks*100)/totalNumber;
	printf("\n Total percentage. %f", percentage);
	return percentage;
}
void getPercentage(percentage){
	if(percentage>100){
		printf("Not valid data at all.");
	}
	else if(percentage<100 && percentage >=80){
		printf("Congratulations! You got distinction.\n");
	}
	else if(percentage<80 && percentage>=60){
		printf("Congratulations! You got First Division.\n");
	}
	else if(percentage<60 && percentage>=50){
		printf("Congratulations! You got Second Division.\n");
	}
	else if(percentage<50 && percentage>40){
	printf("Congratulations! You got Third Division.\n");
	}	
	else {
		printf("Sorry! You are failed\n");
	}
}
int main(){
	int n;
	printf("Enter the Number of total Subject:\n ");
	scanf("%d",&n);
	int array[n],i;
	printf("Enter the %d subject's marks \n",n);
	for( i=0; i<n; i++){
		printf("Enter the number of array[%d] subject: ",i);
		scanf("%d", &array[i]);	
	}
	for(i=0;i<n;i++){
		printf("The number of %d is %d\n", i,array[i]);
	}
	int totalMarks = getTotalMarks(array,n);
	setPercentage(totalMarks,n);
	getPercentage(setPercentage(totalMarks,n));
	
	printf("\n");
	return 0;
}
