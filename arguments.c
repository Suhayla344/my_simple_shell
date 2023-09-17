#include <stdio.h>
#include <string.h>

int main(void)
{
	char comm[] = "ls -l /home/bin/bash";
	char *toke;
	
	toke = strtok(comm, " ");
	while (toke != NULL)
	{
		printf("%s\n", toke);
		toke = strtok(NULL, " ");
	}
}
