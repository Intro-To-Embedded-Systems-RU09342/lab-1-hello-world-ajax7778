/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 7, 2018
 *      Author: Russell Trafford
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/

#include <stdio.h>
#ifndef MATH_H_
#define MATH_H_

int main()
{
//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int num1, num2;
char Operator;
float result;

printf("Enter a number:" );
scanf("%i %d", &num1);
printf("\nEnter another number:");
scanf("%i %d", &num2);

printf("\nWhich operation would you like to perform?");
scanf("%c %d", &Operator);

result = 0;

switch(num1, num2, Operator)
{
    case '+': 
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1/num2;
        break;
    case '%':
        result = num1%num2;
        break;
    case '<':
        result = num1 << num2;
        break;
    case '>':
        result = num1 >> num2;
        break;
    case '&':
        result = num1&num2;
        break;
    case '|':
        result = num1|num2;
        break;
    case '^':
        result = num1^num2;
        break;
    case '~':
        result = ~num1;
        break;
    default: 
        printf("\nInvalid operation.");
}
return 0;
}
#endif
