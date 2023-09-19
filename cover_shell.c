#include <stdio.h>
#include <unistd.h>

int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		char comm[1000];

		getcwd(comm, sizeof(comm)); /*char *getcwd()*/
		char *username = getlogin();
		char hostname[1000];

		gethostname(hostname, sizeof(hostname));
		printf("%s@%s:%s$\n", username, hostname, comm);
	}
}
