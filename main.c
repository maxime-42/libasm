#include <stdio.h>
#include "libasm.h"

void	test_write(char *str)
{
		size_t size = 0;
		size = strlen(str);
		size = ft_write(0, str, size);
		printf("\nreturn = %zd\n", size);
}

void	test_strlen(char *str)
{
		size_t	size;
		size = ft_strlen(str);
		
		printf("strlen : %zd\n", size);
}

void	test_strcpy(void)
{
		char	buf[20];
		char    *str;

		str = ft_strcpy(buf, "abcdef");
		printf("%s\n", str);
}

int	main()
{
		test_strlen("coucou");
		test_write("salut");
		test_strcpy();
		return (0);
}