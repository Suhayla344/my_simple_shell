#include  "shell.h"

int main(int ac, char **av)
{
	int v = 7;

	pid_t pross_id = getppid();

	printf("PID is : %u\n", pross_id);
	my_printf("blaa bla\n");
}
