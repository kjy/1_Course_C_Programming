/*
Function encapsulation example
*/

# include <stdio.h>


void wrt_very(int count)
{
   while(count > 0)
   {
	printf("\n very");
	count--;
   }
   printf(" much.\n\n");
}

int main (void)
{
   int repeat = 0;
   printf("How much do you like coding 1-10? : ");
   scanf("%d", &repeat);
   printf("\nI like coding very:");
   wrt_very(repeat);
   return 0;
}
