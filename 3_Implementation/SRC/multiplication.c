#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
#include "cal.h"
// use multiply() function to multiply two numbers  
int multiply()  
{  
    int number1, number2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &number1);  
    printf (" The second number is: ");  
    scanf ("  %d", &number2);  
    res = number1 * number2;    
    printf (" The multiply of %d * %d is: %d", number1, number2, res);  
}  