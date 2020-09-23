/*
Use of simple arrays as parameters
When passing in an array into a function foobar() 
for processing – such as averaging a number of grades,
you also pas in the size of hte array.  An array name in C
is just a pointer to a base addres and there is no way to know
its size.
*/

#include <stdio.h>

double average_grades(int how_many, int grades[])
{
   int i;
   double sum = 0.0;

   for (i = 0; i < how_many; i++)
       sum += grades[i];
   return (sum/how_many);
}

void print_grades(int how_many, int grades[])
{
  int i;

  printf("I have %d grades\n", how_many);
  for (i = 0; i < how_many; i++)
	printf("%d\t", grades[i]);
}
int main(void)
{
	const int SIZE = 5;
	int grades[SIZE] = {78, 67, 92, 83, 88};

	print_grades(SIZE, grades);
	printf("\n\n");
	printf("my average is %.2f\n\n", average_grades(SIZE, grades));

        return 0;
}
