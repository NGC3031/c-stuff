#include <stdio.h>
/* print farenheit-celsius table
 for fahr = 0, 20, ..., 300 */

#define     LOWER   0       /* lower limit of table */
#define     UPPER   300     /* upper limit */
#define     STEP    20      /* step size */

 int main()
 {
     float celsius;
     int fahr, lower, upper, step;

     printf("%12s %11s", "Farenheit", "Celsius\n");
     for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
     {
         printf("%12d %10.1f\n", fahr, (5.0/9.0)*(fahr-32));
     }
 }