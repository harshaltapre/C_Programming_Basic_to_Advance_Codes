#include <stdio.h>
#define PI 3.14
int main(){
	int radius;  // for radius of circle in integer if you want float then change int to float
	printf("Area of Circle calculator\n");
	printf("Enter the Radius of Circle :\t");
	scanf("%d",&radius);
	int area;
	area =PI*radius*radius; // area = π * r^2
	printf("Area of Circle :%d",area);
return 0;
}


/*
#include <stdio.h>
#define PI 3.14
#include <math.h> //math.h header file for the POW so we can do a^v 
int main(){
int radius;  // for radius of circle in integer if you want float then change int to float
	printf("Area of Circle calculator\n");
	printf("Enter the Radius of Circle :\t");
	scanf("%d",&radius);
	int area;
	area =PI*pow(radius,2); // area = π * r^2
	printf("Area of Circle :%d",area);
return 0;
}

*/