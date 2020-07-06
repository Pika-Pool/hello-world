#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello World\n");

	printf("Your arguments:\n");
	for (int i = 0; i < argc; ++i)
	{
		printf("1.\t%s\n", argv[i]);
	}

	return 0;
}
