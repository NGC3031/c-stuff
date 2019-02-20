#include <stdio.h>
/* print farenheit-celsius table
 for fahr = 0, 20, ..., 300 */

 int main()
 {
     float fahr, celsius;
     int lower, upper, step;

     lower = 0; /* lower limit of temperature table */
     upper = 300; /* upper limit */
     step = 20; /* step size */

     fahr = lower;
     printf("%12s %11s", "Farenheit", "Celsius\n");
     while (fahr <= upper){
         celsius = (5.0/9.0) * (fahr-32.0);
         printf("%12.0f %10.2f\n", fahr, celsius);
         fahr = fahr + step;
     }
 }