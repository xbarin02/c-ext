#include <iostream>
#include <do>

int main()
{
	// print all `unsigned char` values
	do (unsigned char c = 0) {
		std::cout << +c << std::endl;
	} while( ++c );
}
