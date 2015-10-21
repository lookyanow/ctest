#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("pid = %d, uid = %d, gid = %d\n",getpid(),getuid(),getgid());
	exit(0);
}
