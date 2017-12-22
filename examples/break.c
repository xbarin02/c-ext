#include <stdio.h>
#include <break>

int main()
{
	for(int z = 0; z < 4; z++)
	{
		for(int y = 0; y < 5; y++)
		{
			// spaces
			for(int x = 0; x < 5; x++)
			{
				printf(" ");
				if( x > 3-y )
					break; // break the inner loop
			}
			// left side
			for(int x = 0; x < 5; x++)
			{
				printf("/");
				if( x == y )
					break(1); // break one nested loop, same as 'break;'
			}
			// right side
			for(int x = 0; x < 5; x++)
			{
				printf("\\");
				if( z < x )
					break(2); // break two nested enclosing loops
				if( x == y )
					break(1);
			}
			printf("\n");
		}
		printf("\n");
	}
}
