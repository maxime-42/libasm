#include <stdio.h>
#include "libasm.h"

void	test_write(void)
{
		char	*str;

		str = "salut";
		printf(" | count = [%zd]\n", ft_write(1, str, ft_strlen(str)));
		printf(" | count = [%zd]\n\n", write(1, str, strlen(str)));

		str = "";
		printf(" | count =  [%zd]\n", ft_write(1, str, ft_strlen(str)));
		printf(" | count =  [%zd]\n\n", write(1, str, strlen(str)));

		str = "1234567890";
		printf(" | count =  [%zd]\n", ft_write(1, str, ft_strlen(str)));
		printf(" | count =  [%zd]\n\n", write(1, str, strlen(str)));

		str = "A";
		printf(" | count =  [%zd]\n", ft_write(0, str, ft_strlen(str)));
		printf(" | count =  [%zd]\n\n", write(0, str, strlen(str)));

		str = "A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z";
		printf(" | count	= [%zd]\n", ft_write(0, str, ft_strlen(str)));
		printf(" | count 	= [%zd]\n\n", write(0, str, strlen(str)));

		str = "A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z";
		printf(" | count	= [%zd]\n", ft_write(-1, str, ft_strlen(str)));
		printf(" | count 	= [%zd]\n\n", write(-1, str, strlen(str)));
}

void	test_strlen(void)
{
		char	*str;

		str = "abcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdef";
		printf("ft_strlen	: [%zd]\n", ft_strlen(str));
		printf("strlen 		: [%zd]\n\n", strlen(str));
		
		str = "salut";
		printf("ft_strlen	: [%zd]\n", ft_strlen(str));
		printf("strlen 		: [%zd]\n\n", strlen(str));
		
		str = "1";
		printf("ft_strlen	: [%zd]\n", ft_strlen(str));
		printf("strlen 		: [%zd]\n\n", strlen(str));
		
		str = "";
		printf("ft_strlen	: [%zd]\n", ft_strlen(str));
		printf("strlen 		: [%zd]\n", strlen(str));

		// str = NULL;
		// printf("ft_strlen	: [%zd]\n", ft_strlen(str));
		// printf("strlen 		: [%zd]\n", strlen(str));
}

void	test_strcpy(void)
{
		char	s1[] = "";
		char    s2[] = "abcabcabcabcabc";
		printf("ft_strcpy = %s\n", ft_strcpy(s2, s1));
		char	s3[] = "";
		char    s4[] = "abcabcabcabcabc";
		printf("strcp = %s\n\n", strcpy(s4, s3));

		char	s5[] = "A";
		char    s6[] = "";
		printf("ft_strcpy = %s\n", ft_strcpy(s5, s6));
		char	s7[] = "A";
		char    s8[] = "";
		printf("strcpy = %s\n\n", strcpy(s7, s8));

		char	s9[] = "I know that GCC uses some of the same flags, but it doesn't include documentation for stuff like";
		char    s10[] = "a";
		printf("ft_strcpy = %s\n", ft_strcpy(s10, s9));
		char	s12[] = "I know that GCC uses some of the same flags, but it doesn't include documentation for stuff like";
		char    s13[] = "a";
		printf("strcpy = %s\n", strcpy(s13, s12));
}

void	test_read(void)
{
    char		buff[1000];
    int         fd;
    ssize_t     ret;
	int			count;

	count = 10;
	printf("ft_read : \n");   
    fd = open("test.txt", O_RDONLY);
    ret = ft_read(fd, buff, count);
    buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
	close(fd);

	printf("read : \n");
	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, count);
	buff[ret] = '\0';
	// printf("buff = %s ret = %zd\n", buff, ret);
	printf("%s \n|ret = %zd|\n\n", buff, ret);
    close(fd);
/********************************************/
	printf("----------------------------------------------------------------------------------------------\n");
	count = 100;
	printf("ft_read : \n");   
    fd = open("test.txt", O_RDONLY);
    ret = ft_read(fd, buff, count);
    buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
	close(fd);

	printf("read : \n");
	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, count);
	buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
    close(fd);
	printf("----------------------------------------------------------------------------------------------\n");
	count = 50;
	printf("ft_read : \n");   
    fd = open("test.txt", O_RDONLY);
	fd = 0;
    ret = ft_read(fd, buff, count);
    buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
	close(fd);

	printf("read : \n");
	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, count);
	buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
    close(fd);
	printf("----------------------------------------------------------------------------------------------\n");
	count = 500;
	printf("ft_read : \n");   
    fd = open("test.txt", O_RDONLY);
    ret = ft_read(fd, buff, count);
    buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
	close(fd);

	printf("read : \n");
	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, count);
	buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
    close(fd);
/*******************************************************/
	count = 50;
	printf("ft_read : \n");   
    fd = open("txt", O_RDONLY);
    ret = ft_read(fd, buff, count);
    buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
	close(fd);

	printf("read : \n");
	fd = open("txt", O_RDONLY);
	ret = read(fd, buff, count);
	buff[ret] = '\0';
	printf("%s \n|ret = %zd|\n\n", buff, ret);
    close(fd);

}

void	test_strcmp(void)
{
		int		count;
		char	*s1;
		char	*s2;
	
		s1 = "1234567890";
		s2 = "1234567890";
		count = ft_strcmp(s1, s2);
		printf("ft_strcmp : [%d]\n", count);
		count = strcmp(s1, s2);
		printf("strcmp : [%d]\n\n", count);

		s1 	= "A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z";
		s2 = "A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y";
		count = ft_strcmp(s1, s2);
		printf("ft_strcmp : [%d]\n", count);
		count = strcmp(s1, s2);
		printf("strcmp : [%d]\n\n", count);

		s1 	= "BZY";
		s2 = "AZY";
		count = ft_strcmp(s1, s2);
		printf("ft_strcmp : [%d]\n", count);
		count = strcmp(s1, s2);
		printf("strcmp : [%d]\n\n", count);
	
		s1 = "Lorem ipsum dolor sit amet consectetur adipiscingelit.";
		s2 = "Lorem ipsum dolor sit amet, consectetur adipiscingelit.";
		count = ft_strcmp(s1, s2);
		printf("ft_strcmp : [%d]\n", count);
		count = strcmp(s1, s2);
		printf("strcmp : [%d]\n", count);


		s1 = "";
		s2 = "Lorem ipsum dolor sit amet, consectetur adipiscingelit.";
		count = ft_strcmp(s1, s2);
		printf("ft_strcmp : [%d]\n", count);
		count = strcmp(s1, s2);
		printf("strcmp : [%d]\n", count);

		s1 = "Lorem ipsum dolor sit amet, consectetur adipiscingelit.";
		s2 = "";
		count = ft_strcmp(s1, s2);
		printf("ft_strcmp : [%d]\n", count);
		count = strcmp(s1, s2);
		printf("strcmp : [%d]\n", count);

}

void	test_strdup(void)
{
	char *str;

	str = "test123456789";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup = %s\n\n", strdup(str));

	str = "rdi sera envoyé a malloc donc doit etre egal au nombre de caractere de *s cad rax";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup    = %s\n\n", strdup(str));

	str = "ABC";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup    = %s\n\n", strdup(str));

	str = "IThe GNU Compiler optimizing compiler produced by the GNU Project supporting  as free software under the GNU General Public";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup    = %s\n\n", strdup(str));

	str = "I know that GCC uses some of the same flags, but it doesn't include";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup    = %s\n\n", strdup(str));

	str = "T";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup    = %s\n\n", strdup(str));

	str = "";
	printf("ft_strdup = %s\n", ft_strdup(str));
	printf("strdup    = %s\n\n", strdup(str));
}

int	main()
{
		test_strlen();
		test_write();
		test_strcmp();
		test_strcpy();
		test_strdup();
		test_read();
		ft_strlen("salut", );
		return (0);
}