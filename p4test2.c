#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	char *name;

	name = malloc(sizeof("fuck"));

	name = "123";

	printf("%s\n", name);
}
