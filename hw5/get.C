#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *addr = getenv(argv[1]);
	if(addr == NULL)
		printf("\"%s\" wasn't found.\n", argv[1]);
	else
		printf("%s is located at %p\n", argv[1], addr);

	return 0;
}

