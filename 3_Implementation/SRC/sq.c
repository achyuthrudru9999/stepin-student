#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
#include "cal.h"
// use sq() function to get the square of the given number  
int sq()  
{  
    int number1, res;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &number1);  
      
    res = number1 * number1;    
    printf (" \n The Square of %d is: %d", number1, res);  
}  