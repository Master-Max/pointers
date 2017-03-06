#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char str[4] = "err\0";
	char lt = 'a';
	int count = 0;

	while(count!=26){
		for(int i=0;i<3;i++){
			//str[i] = lt;
		}
		char str[4] = {lt,lt,lt,'\0'};
		printf("%c %s\n", lt, str );
		lt++;
		count++;
	}
	return 0;
}
