#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main(argc, argv, envp)
int argc;
char **argv, **envp;
{
	int i;
	char **str;
	/* allocate space for an array of 10 strings.
	   store "aaa", "bbb", "ccc", ... in the 10
	   strings. i.e. str[0] should have "aaa" etc. */

	char lt = 'a';

	str = malloc(sizeof(str[3][10]));

	for (i=0;i<3;i++){
		str[i] = lt;
	}
	/* this should print them all out */
	for (i=0; i<10; i++)
		printf("str[%d] = %s\n", i, str[i]);
}
