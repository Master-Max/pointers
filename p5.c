#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct data {
	char *name;
	int age;
};


/* FILL IN fillIt() SO THE PRINT statement below works correctly*/
/* make up a name and age */
fillIt(x)
struct data *x;
{
/* add some data */
}


main(argc, argv, envp)
int argc;
char **argv, **envp;
{
	struct data d;

	fillIt(&d);

	printf("name = %s, age = %d\n", d.name, d.age);
}
