#include <stdio.h>
#include <break>

int main()
{
	for(int i = 0; i < 100; i++) {
		switch(i) {
			case 0: printf("just started\n"); break;
			case 10: printf("reached 10\n"); break;
			case 20: printf("reached 20; exiting loop.\n"); break(1);
			case 30: printf("Will never be reached.\n"); break;
		}
	}

	printf("first statement after for-loop.\n");

	return 0;
}
