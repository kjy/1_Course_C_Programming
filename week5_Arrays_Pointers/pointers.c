/*
Use of pointers and addresses
Pointer to int and pointer to double are different 
and this difference can affect both how much memory 
is pointed at – for example an int may be in 4 bytes 
and a double may be in 8 bytes;  and interpretation 
-namely how the bits are interpreted.
*/

# include <stdio.h>

int main(void)
{
   const int SIZE = 5;

   int grades[SIZE] = {78, 67, 92, 83, 88};
   double sum = 0.0;
   //pointer to double, memory address
   double *ptr_to_sum = &sum;
   int i;

   printf("\n my grades are:\n");

   for (i = 0; i < SIZE; i++)
	printf("%d\t", grades[i]);
   printf("\n\n");

   for (i = 0; i < SIZE; i++)
	sum = sum + grades[i];

   printf("my average is %.2f\n\n", sum/SIZE);
   printf("\n\n");
   
   // %p is hexadecimal(pointer format for address)
   // %lu (long unsigned decimal integer)
   printf("sum is at %p, or %lu and is %lf\n",
	ptr_to_sum,
	ptr_to_sum,
	*ptr_to_sum);  // you dereference the pointer variable and get content
   printf("grades are at %lu to %lu\n", grades, (grades + 5));
   return 0;
}
