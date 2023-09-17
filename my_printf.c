#include "shell.h"

void my_printf(const char *a_printf)
{
	write(STDOUT_FILENO, *a_printf, strlen(massage));
}
