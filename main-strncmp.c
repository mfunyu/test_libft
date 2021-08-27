#include <stdio.h>
#include <string.h>

#include "libft.h"
#include "ft_strncmp.c"
int main(){
    char str[] = "ABC";
	printf("ex| ABC: ABD   = %d\n", strncmp(str, "ABD", 2));
	printf("ac| ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
	printf("ex| ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
	printf("ac| ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
	printf("ex| ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
	printf("ac| ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
	printf("ex| ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
	printf("ac| ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
	printf("ex| ABC: AB    = %d\n", strncmp(str, "AB", 2));
	printf("ac| ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
	printf("ex| ABC: B     = %d\n", strncmp(str, "B", 2));
	printf("ac| ABC: B     = %d\n", ft_strncmp(str, "B", 2));
	printf("ex| ABC: A     = %d\n", strncmp(str, "A", 2));
	printf("ac| ABC: A     = %d\n", ft_strncmp(str, "A", 2));
	char *s1 = "test\201";
	char *s2 = "test\0";
	printf("ex| test\\201: test\\0     = %d\n", strncmp("test\201", "test\0", 6));
	printf("ac| test\\201: test\\0     = %d\n", ft_strncmp("test\201", "test\0", 6));
	printf("ex| test\\201: test\\0     = %d\n", strncmp(s1, s2, 6));
	printf("ac| test\\201: test\\0     = %d\n", ft_strncmp(s1, s2, 6));
    return 0;
}