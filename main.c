#include "get_next_line.c"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{
	int fd = open("text.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	close(fd);
	return 0;
}
