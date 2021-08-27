/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainPart1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunyu <mfunyu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:18:45 by mfunyu            #+#    #+#             */
/*   Updated: 2020/06/28 15:26:38 by mfunyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <libc.h>
#include <ctype.h>

#include "libft.h"

void	invalid_arg(int i, char	*str)
{
	printf("Invalid numbers of arguments.\n");
	printf("You need %d arguments for this function.\n", i);
	printf("help: %s", str);
	exit(1);
}

int		main(int ac, char **av)
{
	if (ac < 2)
	{
		printf("Enter a filename\n");
		return (0);
	}
	printf("-----<<< ft_%s >>>-----\n", av[1]);
	if (!strcmp(av[1], "strlen"))
	{
		char	*help = "\n./a.out strlen [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: %s\n", av[2]);
		printf("expected: %lu\n", strlen(av[2]));
		printf(" actual : %lu\n", ft_strlen(av[2]));
	}
	if (!strcmp(av[1], "atoi"))
	{
		char	*help = "\n./a.out atoi [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%s\"\n", av[2]);
		printf("expected: %d\n", atoi(av[2]));
		printf(" actual : %d\n", ft_atoi(av[2]));
	}
	if (!strcmp(av[1], "strncmp"))
	{
		char	*help = "\n./a.out strncmp [文字列1] [文字列2] [比較文字数]\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		printf("argument: \"%s\", \"%s\", %d\n", av[2], av[3], ft_atoi(av[4]));
		printf("expected: %d\n", strncmp(av[2], av[3], ft_atoi(av[4])));
		printf(" actual : %d\n", ft_strncmp(av[2], av[3], ft_atoi(av[4])));
	}
	if (!strcmp(av[1], "strchr"))
	{
		char	*help = "\n./a.out strchr [文字列] [文字] (最初に現れた場所）\n\n";
		if (ac != 4)
			invalid_arg(4, help);
		printf("argument: \"%s\", %c (%d)\n", av[2], av[3][0], (int)av[3][0]);
		printf("expected: \"%s\", %p\n", strchr(av[2], (int)av[3][0]),
										strchr(av[2], (int)av[3][0]));
		printf(" actual : \"%s\", %p\n", ft_strchr(av[2], (int)av[3][0]),
										ft_strchr(av[2], (int)av[3][0]));
	}
	if (!strcmp(av[1], "strnstr"))
	{
		char	*help = "\n./a.out strnstr [元の文字列] [探す文字列] [比較文字数]\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		printf("argument: \"%s\", \"%s\" (%d)\n", av[2], av[3], ft_atoi(av[4]));
		printf("expected: \"%s\"\n", strnstr("\0", av[3], '\0'));
		printf(" actual : \"%s\"\n", ft_strnstr(av[2], av[3], ft_atoi(av[4])));
	}
	if (!strcmp(av[1], "strrchr"))
	{
		char	*help = "\n./a.out strrchr [文字列] [探す文字] (最後に現れた場所）\n\n";
		if (ac != 4)
			invalid_arg(4, help);
		printf("argument: \"%s\", %c (%d)\n", av[2], av[3][0], (int)av[3][0]);
		printf("expected: \"%s\", %p\n", strrchr(av[2], (int)av[3][0]),
										strrchr(av[2], (int)av[3][0]));
		printf(" actual : \"%s\", %p\n", ft_strrchr(av[2], (int)av[3][0]),
										ft_strrchr(av[2], (int)av[3][0]));
	}
	if (!strcmp(av[1], "strdup"))
	{
		char	*help = "\n./a.out strchr [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%s\", (%p)\n", av[2], &av[2]);
		printf("expected: \"%s\", %p\n", strdup(av[2]), strdup(av[2]));
		printf(" actual : \"%s\", %p\n", ft_strdup(av[2]), ft_strdup(av[2]));
	}
	if (!strcmp(av[1], "isalpha"))
	{
		char	*help = "\n./a.out strchr [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%c\" (%d)\n", av[2][0], av[2][0] + 0);
		printf("expected: %d\n", isalpha((int)av[2][0]));
		printf("actual : %d\n", ft_isalpha((int)av[2][0]));
	}
	if (!strcmp(av[1], "isdigit"))
	{
		char	*help = "\n./a.out strchr [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%c\" (%d)\n", av[2][0], av[2][0] + 0);
		printf("expected: %d\n", isdigit((int)av[2][0]));
		printf("actual : %d\n", ft_isdigit((int)av[2][0]));
	}
	if (!strcmp(av[1], "isalnum"))
	{
		char	*help = "\n./a.out strchr [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%c\" (%d)\n", av[2][0], av[2][0] + 0);
		printf("expected: %d\n", isalnum((int)av[2][0]));
		printf("actual : %d\n", ft_isalnum((int)av[2][0]));
	}
	if (!strcmp(av[1], "isprint"))
	{
		char	*help = "\n./a.out strchr [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%c\" (%d)\n", av[2][0], av[2][0] + 0);
		printf("expected: %d\n", isprint((int)av[2][0]));
		printf("actual : %d\n", ft_isprint((int)av[2][0]));
	}
	if (!strcmp(av[1], "toupper"))
	{
		char	*help = "\n./a.out strchr [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%c\" (%d)\n", av[2][0], av[2][0] + 0);
		printf("expected: %d, (%c)\n", toupper((int)av[2][0]),
									(char)toupper((int)av[2][0]));
		printf(" actual : %d, (%c)\n", ft_toupper((int)av[2][0]),
									(char)ft_toupper((int)av[2][0]));
	}
	if (!strcmp(av[1], "tolower"))
	{
		char	*help = "\n./a.out strchr [文字列]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		printf("argument: \"%c\" (%d)\n", av[2][0], av[2][0] + 0);
		printf("expected: %d, (%c)\n", tolower((int)av[2][0]),
								(char)tolower((int)av[2][0]));
		printf(" actual : %d, (%c)\n", ft_tolower((int)av[2][0]),
								(char)ft_tolower((int)av[2][0]));
	}
	if (!strcmp(av[1], "memset"))
	{
		char	*help = "\n./a.out strchr [文字列全体] [渡すポインタの位置] [書き込む文字] [バイト数]\n\n";
		if (ac != 6)
			invalid_arg(6, help);
		char *str1 = av[2];
		char *str2 = av[2];
		printf("argument: str = \"%s\", memset(str + %d, %d, %d)\n", av[2], ft_atoi(av[3]), (int)av[4][0], ft_atoi(av[5]));
		char *s = memset(str2 + ft_atoi(av[3]), (int)av[4][0], ft_atoi(av[5]));
		printf("expected: \"%s\" (ret: \"%s\" %p)\n", str2, s, s);
		char *s2 = ft_memset(str1 + ft_atoi(av[3]), (int)av[4][0], ft_atoi(av[5]));
		printf(" actual : \"%s\" (ret: \"%s\" %p)\n", str1, s2, s2);
	}
	if (!strcmp(av[1], "strlcpy"))
	{
		char	*help = "\n./a.out strchr [dst文字列] [src文字列] [サイズ]\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		char *dst1 = av[2];
		char *dst2 = av[2];
		printf("argument: dst = \"%s\", src = \"%s\", size: %d\n", av[2], av[3], ft_atoi(av[4]));
		strlcpy(dst1, av[3], ft_atoi(av[4]));
		printf("expected: %s (returned: %lu)\n", dst1, strlcpy(dst1, av[3], ft_atoi(av[4])));
		ft_strlcpy(dst2, av[3], ft_atoi(av[4]));
		printf(" actual : %s (returned: %zu)\n", dst2, ft_strlcpy(dst2, av[3], ft_atoi(av[4])));
	}
	if (!strcmp(av[1], "strlcat"))
	{
		char	*help = "\n./a.out strlcat [src文字列] [サイズ] [1or2]\n1:固定サイズ(10), 2:サイズを引数から\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		if (av[4][0] == '1'){
		char *dst1 = malloc(sizeof(char) * 10);
		char *dst2 = malloc(sizeof(char) * 10);
		dst1[0] = 'a';
		dst1[1] = 'b';
		dst1[2] = 'c';
		dst2[0] = 'a';
		dst2[1] = 'b';
		dst2[2] = 'c';
		printf("argument: dst = \"%s\", src = \"%s\", size: %d\n", dst1, av[2], ft_atoi(av[3]));
		unsigned long s = strlcat(dst1, av[2], ft_atoi(av[3]));
		printf("expected: \"%s\" (returned: %lu)\n", dst1, s);
		size_t m = ft_strlcat(dst2, av[2], ft_atoi(av[3]));
		printf(" actual : \"%s\" (returned: %zu)\n", dst2, m);
		}
		else{
		char *dst1 = malloc(sizeof(char) * ft_atoi(av[3]));
		char *dst2 = malloc(sizeof(char) * ft_atoi(av[3]));
		dst1[0] = 'a';
		dst1[1] = 'b';
		dst1[2] = 'c';
		dst2[0] = 'a';
		dst2[1] = 'b';
		dst2[2] = 'c';
		printf("argument: dst = \"%s\", src = \"%s\", size: %d\n", dst1, av[2], ft_atoi(av[3]));
		unsigned long s = strlcat(dst1, av[2], ft_atoi(av[3]));
		printf("expected: \"%s\" (returned: %lu)\n", dst1, s);
		size_t m = ft_strlcat(dst2, av[2], ft_atoi(av[3]));
		printf(" actual : \"%s\" (returned: %zu)\n", dst2, m);
		}
		// dst1 = "abcdef";
	}
	if (!strcmp(av[1], "memmove"))
	{
		char	*help = "\n./a.out memmove [文字数]\n\n";
		if (ac != 3)
			invalid_arg(3, help);
		char s1[15] = "1234567890";
		char n1[15] = "1234567890";
		// char s2[10] = "abcdefg";
		// char n2[10] = "abcdefg";
		// char s3[15] = "1234567890";
		// char n3[15] = "1234567890";
		// char s1[15] = "\0";
		// char n1[15] = "\0";
		char s2[10] = "\0";
		char n2[10] = "\0";
		char s3[15] = "1234567890";
		char n3[15] = "1234567890";
		printf("argument: \"%s\", \"%s\", (%d)\n", s1, s2, ft_atoi(av[2]));
		char *ret = memmove(s1, s2, ft_atoi(av[2]));
		printf("expected: \"%s\" (ret: %s %p)\n", s1, ret, ret);
		char *ret2 = ft_memmove(n1, n2, ft_atoi(av[2]));
		printf(" actual : \"%s\" (ret: %s %p)\n", n1, ret2, ret2);
		memmove(s3 + 3, s3, ft_atoi(av[2]));
		printf("expected: \"%s\"\n", s3);
		ft_memmove(n3 + 3, n3, ft_atoi(av[2]));
		printf(" actual : \"%s\"\n", n3);
	}
	if (!strcmp(av[1], "memcpy"))
	{
		char	*help = "\n./a.out strchr [文字数] [d of s] [ポインタの位置]\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		char s1[15] = "1234567890";
		char s3[15] = "1234567890";
		char s2[10] = "abcdefg";
		char n1[15] = "1234567890";
		char n3[15] = "1234567890";
		char n2[10] = "abcdefg";
		printf("argument: \"%s\", \"%s\", (%d)\n", s1, s2, ft_atoi(av[2]));
		memcpy(s1, s2, ft_atoi(av[2]));
		printf("expected: \"%s\"\n", s1);
		ft_memcpy(n1, n2, ft_atoi(av[2]));
		printf(" actual : \"%s\"\n", n1);
		if (av[3][0] == 'd'){
		memcpy(s3 + atoi(av[4]), s3, ft_atoi(av[2]));
		printf("expected: \"%s\"\n", s3);
		ft_memcpy(n3 + atoi(av[4]), n3, ft_atoi(av[2]));
		printf(" actual : \"%s\"\n", n3);}
		else{
		memcpy(s3, s3 + atoi(av[4]), ft_atoi(av[2]));
		printf("expected: \"%s\"\n", s3);
		ft_memcpy(n3, n3 + atoi(av[4]), ft_atoi(av[2]));
		printf(" actual : \"%s\"\n", n3);
		}
	}
	if (!strcmp(av[1], "memchr"))
	{
		char	*help = "\n./a.out memchr [探す文字] [文字数]\n\n";
		if (ac != 4)
			invalid_arg(4, help);
		char s1[] = "abcdefg\0hijklmn";
		char n1[] = "abcdefg\0hijklmn";
		printf("argument: \"%s\", \"%c\" (%d), %d\n", s1, av[2][0], (int)av[2][0], ft_atoi(av[3]));
		;
		printf("expected: \"%s\", %p\n", memchr(s1, (int)av[2][0], ft_atoi(av[3])), memchr(s1, (int)av[2][0], ft_atoi(av[3])));
		printf(" actual : \"%s\", %p\n", ft_memchr(n1, (int)av[2][0], ft_atoi(av[3])), ft_memchr(n1, (int)av[2][0], ft_atoi(av[3])));
	}
	if (!strcmp(av[1], "memccpy"))
	{
		char	*help = "\n./a.out memccpy [srcから探す文字] [最大文字数]\n\n";
		if (ac != 4)
			invalid_arg(4, help);
		char s1[15] = "abcdefghijklmn";
		// char s3[15] = "abcdefghijklmn";
		char s2[10] = "123456789";
		char n1[15] = "abcdefghijklmn";
		// char n3[15] = "abcdefghijklmn";
		char n2[10] = "123456789";
		printf("argument: \"%s\", \"%s\", %c (%d), %d\n", s1, s2, av[2][0], (int)av[2][0], ft_atoi(av[3]));
		char *p = memccpy(s1, s2,(int)av[2][0], ft_atoi(av[3]));
		printf("expected: \"%s\" (ret: \"%s\" %p)\n", s1, p, p);
		char *k = ft_memccpy(n1, n2, (int)av[2][0], ft_atoi(av[3]));
		printf(" actual : \"%s\" (ret: \"%s\" %p)\n", n1, k, k);
		// p = memccpy(s3, s3 + 3, (int)av[2][0], ft_atoi(av[3]));
		// printf("expected: \"%s\" (ret: \"%s\" %p)\n", s3, p, p);
		// p = ft_memccpy(n3, n3 + 3, (int)av[2][0], ft_atoi(av[3]));
		// printf(" actual : \"%s\" (ret: \"%s\" %p)\n", n3, p, p);
	}
	if (!strcmp(av[1], "memcmp"))
	{
		char	*help = "\n./a.out strchr [文字列1] [文字列2] [文字数]\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		printf("argument: \"%s\", \"%s\", %d\n", av[2], av[3], ft_atoi(av[4]));
		printf("expected: %d\n", memcmp(av[2], av[3], ft_atoi(av[4])));
		printf(" actual : %d\n", ft_memcmp(av[2], av[3], ft_atoi(av[4])));
	}
	if (!strcmp(av[1], "bzero"))
	{
		char	*help = "\n./a.out strchr [文字列] [ポインターの位置] [文字数]\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		char *str1 = av[2];
		char *str2 = av[2];
		printf("argument: str = \"%s\", bzero(str + %d, %d)\n", av[2], ft_atoi(av[3]), ft_atoi(av[4]));
		bzero(str2 + ft_atoi(av[3]), ft_atoi(av[4]));
		printf("expected: \"%s\"\n", str2);
		ft_bzero(str1 + ft_atoi(av[3]), ft_atoi(av[4]));
		printf(" actual : \"%s\"\n", str1);
	}
	return (0);
}
