#include <stdio.h>

int areaOfRectangle(int length,int breadth){
	int area = length * breadth;
	if(area>1000){
		printf("Large Room\n");
	}
	else if (area>=1000 && area <500){
		printf("Mid Room.\n");
	}
	else{
		printf("Small Room.\n");
	}
	return area;
}
int volumeOfRectangle(int length , int breadth, int height){
	int volume = length * breadth * height;	
	return volume;
	
}
int areaOfCircle(int radius){
	int area = 3.14 * radius *radius;
	return area;
}

int main(){
	int calculate, radius, length, breadth, height, area, volume;	
	printf("Enter the Number:\n");
	scanf("%d",&calculate);
	switch(calculate){
		case 1:
			printf("Enter the length of the Rectangle.\n");
			scanf("%d", &length);
			printf("Enter the breadth of the Rectangle.\n");
			scanf("%d", &breadth);
			printf("The area of Rectangle is %d \n",areaOfRectangle(length, breadth));
			break;
		case 2:
			printf("Enter the length of the Rectangle.\n");
			scanf("%d", &length);
			printf("Enter the breadth of the Rectangle.\n");
			scanf("%d", &breadth);
			printf("Enter the height of the Rectangle:\n");
			scanf("%d",&height);
			printf("The volume of rectangle is %d\n",volumeOfRectangle( length, breadth, height));
			break;
		case 3:
			printf("Enter the radius of the Circle.\n");
			scanf("%d", &radius);
			printf("The area of circle is %d",areaOfCircle(radius));
			break;
	}
	return 0;
}
