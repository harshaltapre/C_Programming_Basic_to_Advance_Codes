#include <stdio.h>
int main(){
	// Use of for LOOP 
	int i;
	for (i = 1; i <= 10; i++){
		printf("%d \n", i);
	}
	// Use of While LOOP 
	i = 1;
	while (i <= 10){
		printf("This is while Loop \n");
		i++;
	}
	// Use of Do while Loop 
	i = 1;
	do{
		printf("Hello! \n");
		i++;
	}while (i <= 10);
	return 0;
}