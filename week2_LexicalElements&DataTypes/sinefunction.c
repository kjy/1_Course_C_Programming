/* Write a program that can give the sine 
of a value between 0 and 1 (non-inclusive).
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	double value; 
	double result;

	printf("Input a value between 0 and 1 but does not include 0 or 1: ");
	scanf("%lf", &value);
        
	// calculate sine function on value
	result = sin(value);
	printf("Sine of %lf is : %lf \n\n", value, result );
	return 0;
}

