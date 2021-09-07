#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
#include "cal.h"
// use sqrt1() function to get the square root of the given number   
int sqrt1()  
{  
    float res;  
    int number1;  
    printf (" Enter a number to get the Square Root: ");  
    scanf ("  %d", &number1);  
  
    res = sqrt(number1);   
    printf (" \n The Square Root of %d is: %f", number1, res);  
}  