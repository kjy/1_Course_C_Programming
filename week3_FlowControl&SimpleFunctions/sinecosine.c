/* Write a C program that has a function that prints a table of values
   for sine and cosine between (0,1).  
*/

#include<stdio.h>
#include<math.h>  // has sin() and cos()

int main(void)
{
    double interval;
	int i;
    for(i = 0; i < 10; i++)
    {
       interval = i/10.0;
       // Calculate sine and cosine of a value between 0 and 1
       printf("sin(%lf) = %lf ", interval, sin(interval));
       printf("cos(%lf) = %lf \n", interval, cos(interval));
    }
printf("\n+++++++\n");
return 0;
}

