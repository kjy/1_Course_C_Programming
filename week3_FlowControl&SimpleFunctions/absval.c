
/*
The following program is suppose to use the sin() function in the math library
and write out an input's absolute value over an interval.  So for example, if
sine(0.6) is 0.564, then its absolute value is the same (0.564).  But if sine(2.4)
is -0.675 then its absolute value is 0.675.
*/

#include<stdio.h>
/* The fabs() function takes a single argument (in double ) 
   and returns the absolute value of that number (also in double ).
*/

#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
	double interval;
	int i;
	   for(i = 0; i <30; i++) // indent code body
	   { 
 		interval = i/10.0;
 		printf("sin(%lf) = %lf \t", interval, fabs(sin(interval)));
	   }


printf("\n+++++++\n");
return 0;
}
