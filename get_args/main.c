#include <stdio.h>

/*
int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
*/

int main(int argc, char **argv)
{

	for (; *argv; argv++)
	{
		printf("%s\n", *argv);
	}

	return 0;
}
