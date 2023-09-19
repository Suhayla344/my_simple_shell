#include "shell.h"

void exef(const char *comand)
{
	pid_t child_pid = fork(); //creat a child pro

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(comand, comand, (char *)NULL);
		perroe("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
