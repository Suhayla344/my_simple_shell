#include  <stdio.h>
#include <unistd.h>

int main(void)
{
	int v = 7;

	pid_t pross_id = getppid();

	printf("PID is : %u", pross_id);
}
