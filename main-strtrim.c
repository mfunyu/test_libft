#include <stdio.h>
#include <string.h>

#include "libft.h"
#include "ft_strtrim.c"
#include "ft_strlcpy.c"
#include "ft_strlen.c"
#include "ft_strchr.c"
int main(){
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *trim = " \n\t";
	char *ret;
	printf("ex| \"%s\"\n", s2);
	printf("ex| \"%zu\"\n", ft_strlen(s2));
	printf("ac| \"%s\"\n", ret = ft_strtrim(s1, trim));
	printf("ac| \"%zu\"\n", ft_strlen(ret));
	// printf("ex| \"%d\"\n", strtrim(s1, trim));
	// printf("ac| \"%d\"\n", ft_strtrim(s1, s2, 6));
    return 0;
}