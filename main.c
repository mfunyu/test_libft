#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <malloc/malloc.h>

/*
Added functions #2
*/

#ifdef ITOA
//char	*ft_itoa(int n);
int	main(int ac, char **av)
{
	int		n = atoi(av[1]);

	printf("%s\n", ft_itoa(n));
}
#endif

#ifdef SPLIT
//char	**ft_split(char const *s, char c);
static void	print_array(char **arr)
{
	while (arr && *arr)
	{
		printf("%s\n", *arr);
		free(*arr);
		arr++;
	}
}

int	main(int ac, char **av)
{
	char	*s = av[1];
	char	c = av[2][0];

	char **ret = ft_split(s, c);

	if (!ret)
		printf("%s\n", ret);
	else
		print_array(ret);
	free(ret);
}
#endif

#ifdef STRTRIM
//char	*ft_strtrim(char const *s1, char const *set);
int	main(int ac, char **av)
{
	char	*s1 = av[1];
	char	*set = av[2];

	char *ret = ft_strtrim(s1, set);
	printf("%s\n", ret);
	free(ret);
}
#endif

#ifdef STRITERI
//void	ft_striteri(char *s, void (*f)(unsigned int, char*));

static void	func(unsigned int ui, char *s)
{
	for(int i = 0; s[i]; i++)
		s[i] += ui;
}

int	main(int ac, char **av)
{
	char	*s = av[1];
	char	(*f)(unsigned int, char *) = func;

	ft_striteri(s, func);
	printf("%s\n", s);
}
#endif

#ifdef STRMAPI
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

static char	func(unsigned int ui, char c)
{
	return (c + ui);
}

int	main(int ac, char **av)
{
	char	*s = av[1];
	char	(*f)(unsigned int, char) = func;

	char *ret = ft_strmapi(s, f);
	printf("ret: %s\n\n", ret);

	printf("arg: %p\n", s);
	printf("ret: %p\n", ret);
	free(ret);
}
#endif

/*
Added functions #1
*/

#ifdef PUTNBR
//void	ft_putnbr_fd(int n, int fd);
int		main(int ac, char **av)
{
	int		n = atol(av[1]);
	int		fd = atoi(av[2]);

	ft_putnbr_fd(n, fd);
}
#endif

#ifdef PUTENDL
//void	ft_putendl_fd(char *s, int fd);
int		main(int ac, char **av)
{
	char	*s = av[1];
	int		fd = atoi(av[2]);

	ft_putendl_fd(s, fd);
}
#endif

#ifdef PUTSTR
//void	ft_putstr_fd(char *s, int fd);
int		main(int ac, char **av)
{
	char	*s = av[1];
	int		fd = atoi(av[2]);

	ft_putstr_fd(s, fd);
}
#endif

#ifdef PUTCHAR
//void	ft_putchar_fd(char c, int fd);
int		main(int ac, char **av)
{
	char	c = atoi(av[1]);
	// char	c = av[1][0];
	int		fd = atoi(av[2]);

	ft_putchar_fd(c, fd);
}
#endif

#ifdef STRJOIN
//char	*ft_strjoin(char const *s1, char const *s2);
int	main(int ac, char **av)
{
	char	*s1 = av[1];
	char	*s2 = av[2];

	printf("%s\n", ft_strjoin(s1, s2));
}
#endif

#ifdef SUBSTR
//char	*ft_substr(char const *s, unsigned int start, size_t len);
int	main(int ac, char **av)
{
	char	*s = av[1];
	int		start = atoi(av[2]);
	int		len = atoi(av[3]);

	printf("%s\n", ft_substr(s, start, len));
}
#endif

/*##################################################################*/

/*
LibC functions #4
*/

#ifdef STRDUP
//char	*strdup(const char *s1);
int	main(int ac, char **av)
{
	char	*s1 = av[1];

	printf("%s (ft_strdup)\n", ft_strdup(s1));
	printf("%s (strdup)\n", strdup(s1));
}
#endif

#ifdef CALLOC
//void	*calloc(size_t count, size_t size);
int	main(int ac, char **av)
{
	size_t	cnt = atol(av[1]);
	size_t	size = atol(av[2]);

	printf("ret: %p\n", ft_calloc(cnt, size));
	printf("cnt: %zu, size: %zu\n", cnt, size);
}
#endif

#ifdef STRNCMP
//int	strncmp(const char *s1, const char *s2, size_t n);
int	main(int ac, char **av)
{
	char	*s1 = av[1];
	char	*s2 = av[2];
	int		n = atoi(av[3]);

	printf("%d (ft_strncmp)\n", ft_strncmp(s1, s2, n));
	printf("%d (strncmp)\n", strncmp(s1, s2, n));
}
#endif

#ifdef STRNSTR
//char	*strnstr(const char *haystack, const char *needle, size_t len);
int	main(int ac, char **av)
{
	char	*haystack = av[1];
	char	*needle = av[2];
	int		len = atoi(av[3]);

	printf("%s (ft_strnstr)\n", ft_strnstr(haystack, needle, len));
	printf("%s (strnstr)\n", strnstr(haystack, needle, len));
}
#endif

#ifdef ATOI
//int	atoi(const char *str);
int	main(int ac, char **av)
{
	char	*str = av[1];

	printf("%d (ft_atoi)\n", ft_atoi(str));
	printf("%d (atoi)\n", atoi(str));
}
#endif

#ifdef STRLCPY
//size_t	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
int	main(int ac, char **av)
{
	char	*dst = strdup(av[1]);
	char	*src = strdup(av[2]);
	int		dstsize = atoi(av[3]);

	#ifdef EX
	printf("ret: %d\n", strlcpy(dst, src, dstsize));
	#else
	printf("ret: %d\n", ft_strlcpy(dst, src, dstsize));
	#endif
	printf("dst: %s\n", dst);

	free(dst);
	free(src);
}
#endif

#ifdef STRLCAT
//size_t	strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int	main(int ac, char **av)
{
	char	*dst = strdup(av[1]);
	char	*src = strdup(av[2]);
	int		dstsize = atoi(av[3]);

	#ifdef EX
	printf("ret: %d\n", strlcat(dst, src, dstsize));
	#else
	printf("ret: %d\n", ft_strlcat(dst, src, dstsize));
	#endif
	printf("dst: %s\n", dst);

	free(dst);
	free(src);
}
#endif

/*
LibC functions #3
*/

#ifdef STRCHR
//char	*strchr(const char *s, int c);
//char	*strrchr(const char *s, int c);
int main(int ac, char **av)
{
	char	*s = av[1];
	char	c = av[2][0];

	printf("%p (ft_strchr)\n", ft_strchr(s, c));
	printf("%p (strchr)\n\n", strchr(s, c));

	//strrchr
	printf("%p (ft_strrchr)\n", ft_strrchr(s, c));
	printf("%p (strrchr)\n", strrchr(s, c));
}
#endif

/*
LibC functions #2
*/

/*
LibC functions #1
*/

#ifdef MEMCHR
//void	*memchr(const void *s, int c, size_t n);
int main(int ac, char **av)
{
	char	*s = av[1];
	char	c = av[2][0];
	int		n = atoi(av[3]);

	printf("%p (ft_memchr)\n", ft_memchr(s, c, n));
	printf("%p (memchr)\n", memchr(s, c, n));
}
#endif

#ifdef MEMCMP
//int	memcmp(const void *s1, const void *s2, size_t n);
int main(int ac, char **av)
{
	char	*s1 = av[1];
	char	*s2 = av[2];
	int		n = atoi(av[3]);

	printf("%d (ft_memcmp)\n", ft_memcmp(s1, s2, n));
	printf("%d (memcmp)\n", memcmp(s1, s2, n));
}
#endif

#ifdef MEMMOVE
//void	*memmove(void *dst, const void *src, size_t len);
int	main(int ac, char **av)
{
	char	*dst = strdup(av[1]);
	char	*src = av[2];
	int		len = atoi(av[3]);

	ft_memmove(dst, src, len);

	// output1
	for (int i = 0; i < len; i++)
		printf("%c", b[i]);
	printf("\n");

	//output2
	printf("dst: %s\n", dst);
	printf("src: %s\n", src);

	free(dst);
}
#endif

#ifdef MEMSET
//void	*memset(void *b, int c, size_t len);
int	main(int ac, char **av)
{
	char	*b = av[1];
	int		c = av[2][0];
	// int		c = atoi(av[2]);
	int		len = atoi(av[3]);

	ft_memset(b, c, len);

	// output
	for (int i = 0; i < len; i++)
		printf("%c", b[i]);
	printf("\n");
}
#endif

#ifdef MEMCPY
//void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
int main(int ac, char **av)
{
	char	*dst = strdup(av[1]);
	char	*src = av[2];
	int		len = atoi(av[3]);

	printf("buf: %s src: %s len: %d\n", dst);

	ft_memcpy(dst, src, len);

	// output
	for (int i = 0; i < len; i++)
		printf("%c", dst[i]);
	printf("\n");

	free(dst);
}
#endif

#ifdef STRLEN
//size_t	strlen(const char *s);
int	main(int ac, char **av)
{
	char	*s = av[1];

	printf("%d (ft_strlen)\n", ft_strlen(s));
	printf("%d (strlen)\n", strlen(s));
}
#endif
