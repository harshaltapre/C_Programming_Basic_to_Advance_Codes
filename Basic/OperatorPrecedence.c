#include <stdio.h>
int main() { 
    int a = 5, b = 10, c = 15;
    int result;
    result = a + b * c; // Multiplication has higher precedence than addition
    printf("Result of a + b * c: %d\n", result); // Should print 5 + (10 * 15) = 155
    result = (a + b) * c; // Parentheses change precedence
    printf("Result of (a + b) * c: %d\n", result); // Should print (5 + 10) * 15 = 225
    result = a + b / c; // Division has higher precedence than addition
    printf("Result of a + b / c: %d\n", result); // Should print 5 + (10 / 15) = 5 + 0 = 5
    result = a * b + c; // Multiplication has higher precedence than addition
    printf("Result of a * b + c: %d\n", result); // Should print (5 * 10) + 15 = 50 + 15 = 65
    return 0;
}