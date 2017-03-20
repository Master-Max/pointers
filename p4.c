#include <stdio.h>
#include <string.h>
#include <stdlib.h>


main(argc, argv, envp)
int argc;
char **argv, **envp;
{
	int i = 0;
	char **str;
	/* allocate space for an array of 10 strings.
	   store "aaa", "bbb", "ccc", ... in the 10
	   strings. i.e. str[0] should have "aaa" etc. */

	char lt = 'a';

	str = malloc(30*sizeof('a'));

	str[0]="aaa";
	str[1]="bbb";
	str[2]="ccc";
	str[3]="ddd";
	str[4]="eee";
	str[5]="fff";
	str[6]="ggg";
	str[7]="hhh";
	str[8]="iii";
	str[9]="jjj";

	/*
	for (i=0;i<10;i++){
		char t[4]={lt,lt,lt,'\0'};
		str[i] = t;
		lt++;

		//printf("%s\n", str[i]);
		printf("%d %s %d\n",&str[i],str[i],i);
		if(i>0)
			printf("%s %s\n",str[i],str[i-1]);

		//str[i][0] = lt;
		//str[i][1] = lt;
		//str[i][2] = lt;
		//str[i][d] = 0;

		//*str[i] = lt;
		//*str[i+1]=lt;
		//*str[i+2]=lt;
		//*str[i+3]=0;
		//lt++;
		//printf("%c\n",str[i]);
	}*/
	/* this should print them all out */
	for (i=0; i<10; i++)
		printf("str[%d] = %s\n", i, str[i]);
}
