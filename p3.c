#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main(argc, argv, envp)
int argc;
char **argv, **envp;
{
	char *str;

	str = malloc(sizeof("abc"));

	str = "abc";
	/* allocate space for the string, store "abc" in it */


	printf("%s\n", str);
}
