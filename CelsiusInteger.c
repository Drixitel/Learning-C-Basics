#include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300*/
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temp scale */ 
    upper = 300;    /* upper limit of temp scale */
    step = 20;      /* step size */

    fahr = lower; 
    while (fahr <= upper){                  //while loop conditon
        celsius = 5 * (fahr-32)/9;          // actions
        printf("%3d\t%6d\n", fahr, celsius);// %3d, %6d for alignment
        fahr = fahr + step;                 // ends when fahr> upper
    }
}

