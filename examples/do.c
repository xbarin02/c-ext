#include <stdio.h>
#include <do>

int main()
{
	// print all `unsigned char` values
	do (unsigned char c = 0) {
		printf("%i\n", c);
	} while( ++c );
}
