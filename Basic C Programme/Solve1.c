// Write a program where you have to take 2 numerical inputs. Depending on some comparisons, you need 
// to print any of the statements below:				
// If the first number is greater than the second number, 
// do subtraction and print the result.
// If the first number is less than the second number, perform addition and print the result.
// If the first number is equal to the second number, do multiplication and print the result. 

#include <stdio.h>

int main(){

    int num1, num2, result;

    printf("Enter the first number:\n");
    scanf("%d" , &num1);
    printf("Enter the second number:\n");
    scanf("%d" , &num2);

    if (num1 > num2){
        result = num1 - num2;
    }
    else if (num1 < num2){
        result = num1 + num2;
    }
    else{
        result = num1 * num2;
    }


    printf("The result is: %d\n", result);

    return 0;
}