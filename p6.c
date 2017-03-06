#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct data {
	char *name;
	int age;
};


swap(x,y)
??
{
}


main(argc, argv, envp)
int argc;
char **argv, **envp;
{
	int i;
	struct data a,b;

	/* CREATE A ROUTINE called swap above which takes
	   two pointers to a struct data and switches them */


	a.name = strdup("aviva");
	a.age=21;

	b.name = strdup("monique");
	b.age=23;

	printf("%s %d\n", a.name, a.age);
	printf("%s %d\n", b.name, b.age);

	swap(&a, &b);

	printf("%s %d\n", a.name, a.age);
	printf("%s %d\n", b.name, b.age);
}
