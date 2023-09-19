#include "shell.h"

int main(void)
{
	char comm[222];

	while (1)
	{
		d_play_prompt();
		read_command(comm, sizeo(comm));
		exe_comm(comm);
	}
	return (0);
}
