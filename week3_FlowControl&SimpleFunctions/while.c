/*
while loop demonstration

*/

#include <stdio.h>

int main(void)
{
	int repeat = 0;
	printf("How much do you like coding 1-10? : ");
	scanf("%d", &repeat);
	printf("\nI like coding very");
	while(repeat > 0)
	{
		printf("\n very");
		repeat--;  //auto-decrement
	};
	printf(" much.\n\n");
	return 0;
};
 
