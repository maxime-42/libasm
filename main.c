#include <stdio.h>
#include "libasm.h"

void	test_write(char *str)
{
		size_t size;
		size = strlen(str);
		size = ft_write(0, str, size);
		printf("\nreturn = %zd\n", size);
		return (0);
}

int	main()
{
		size_t size = 2;
		// size = ft_write(0, "coucou", 6);
		size = write(0, "coucou", 6);

		printf("\nreturn = %zd\n", size);
		return (0);
}