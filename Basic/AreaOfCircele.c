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