// Adjusting Celsius integrer file to account for decimals

#include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; Floating point version*/
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temp scale */ 
    upper = 300;    /* upper limit of temp scale */
    step = 20;      /* step size */

    fahr = lower; 
    while (fahr <= upper){                  //while loop conditon
        celsius = (5.0/9.0) * (fahr-32.0);          // actions
        printf("%3.0f\t%6.1f\n", fahr, celsius); 
        fahr = fahr + step;                 // ends when fahr> upper
    }
}

