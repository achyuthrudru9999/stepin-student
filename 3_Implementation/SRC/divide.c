#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
#include "cal.h"
int divide()  
{  
    int number1, number2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &number1);  
    printf (" The second number is: ");  
    scanf ("  %d", &number2);  
      
    if (number2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &number2);        
    }  
    res = number1 / number2;    
    printf (" \n The division of %d / %d is: %d", number1, number2, res);  
}  