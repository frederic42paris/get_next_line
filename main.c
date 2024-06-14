#include "get_next_line.h"

int	main(void)
{
	char	*nl = NULL;
	// int	fd = open("bible.txt", O_RDONLY);
	int fd = 0;
	int	i = 1;

	while (1)
	{
		nl = get_next_line(fd);
		printf("[%d] %s", i, nl);
		if (!nl)
			break;
		free(nl);
		i++;
	}
}
