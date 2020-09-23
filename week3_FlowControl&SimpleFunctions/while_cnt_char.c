/* while-cnt-char explained
Characters are between 0 and 127 from ASCII table
getchar() obtains from standard input the integer value
of a character until end of file.
&& is "logical and" and takes precedence over "logical or" ||
*/

#include <stdio.h>

int main(void)
{
	int blanks = 0, digits = 0, letters = 0, others = 0;
	int c;  // use for int value of character
	while ((c = getchar()) != EOF )
	{
		if (c == ' ')
		   ++blanks;
		else if ( c >= '0' && c <= '9')
		   ++digits;
		else if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
		   ++letters;
		else
		   ++others;
	}
	printf(" blanks = %d, digits = %d, letters = %d,",
		blanks, digits, letters);
	printf(" others = %d\n\n", others);
	return 0;
};
				
