#include <stdio.h>
int main(){
	// return smallest number 
	printf("Smallest number return program \n");
	int num1,num2;
	printf("Enter the num1 :\t");
	scanf("%d",&num1);
	printf("Enter the num2 :\t");
	scanf("%d",&num2);
	if (num1<num2){
		printf("%d Smallest number",num1);
	}
	else
		printf("%d Smallest number",num2);
return 0;
}