// write a program student pass or fail using Nested IF statement

#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >=0 && marks <100)
        if (marks >= 40)
            printf("Pass\n");
        else
            printf("Fail\n");
    return 0;
    }