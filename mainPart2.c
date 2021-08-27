/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainPart2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfunyu <mfunyu@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 19:15:05 by mfunyu            #+#    #+#             */
/*   Updated: 2020/06/26 23:32:27 by mfunyu           ###   ########.fr       */
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
	if (!strcmp(av[1], "substr"))
	{
		char	*help = "\n./a.out strlen [文字列] [文字index] [substrの長さ]\n\n";
		if (ac != 5)
			invalid_arg(5, help);
		printf("argument: %s,  %d, %d\n", av[2], ft_atoi(av[3]), atoi(av[4]));
		// printf("expected: %lu\n", substr(av[2]));
		printf(" ret : \"%s\"\n", ft_substr(av[2], atoi(av[3]), atoi(av[4])));
	}
	if (!strcmp(av[1], "strjoin"))
	{
		char	*help = "\n./a.out strlen [文字列1] [文字列2]\n\n";
		if (ac != (4))
			invalid_arg(4, help);
		printf("argument: \"%s\", \"%s\"\n", av[2], av[3]);
		// printf("expected: %lu\n", substr(av[2]));
		printf(" ret : \"%s\"\n", ft_strjoin(av[2], av[3]));
	}
	if (!strcmp(av[1], "strtrim"))
	{
		char	*help = "\n./a.out strlen [文字列] [trimする文字羅列]\n\n";
		if (ac != (4))
			invalid_arg(4, help);
		printf("argument: \"%s\", \"%s\"\n", av[2], av[3]);
		// printf("expected: %lu\n", substr(av[2]));
		printf(" ret : \"%s\"\n", ft_strtrim(av[2], av[3]));
	}
	if (!strcmp(av[1], "split"))
	{
		char	*help = "\n./a.out strlen [文字列] [split文字]\n\n";
		if (ac != (4))
			invalid_arg(4, help);
		printf("argument: \"%s\", \'%c\'\n", av[2], av[3][0]);
		// printf("expected: %lu\n", substr(av[2]));
		char	**ret = ft_split(av[2], av[3][0]);
		printf(" ret :");
		while (ret && *ret)
			printf(" \"%s\"", *ret++);
		printf("\n");
	}
	if (!strcmp(av[1], "itoa"))
	{
		char	*help = "\n./a.out itoa [文字列]\n\n";
		if (ac != (3))
			invalid_arg(3, help);
		printf("argument: \"%s\" \n", av[2]);
		// int i =
		// printf("expected: %lu\n", substr(av[2]));
		printf(" ret : \"%s\"\n", ft_itoa(atoi(av[2])));
		// printf(" ret : \"%s\"\n", );
	}
	if (!strcmp(av[1], "putchar"))
	{
		char	*help = "\n./a.out putchar [文字]\n\n";
		if (ac != (3))
			invalid_arg(3, help);
		printf("expected: \"%c\" \n", av[2][0]);
		// printf("expected: %lu\n", substr(av[2]));
		// printf("actual : ");
		ft_putchar_fd(av[2][0], 0);
		printf("\n");
	}
	if (!strcmp(av[1], "putstr"))
	{
		char	*help = "\n./a.out putstr [文字列]\n\n";
		if (ac != (3))
			invalid_arg(3, help);
		printf("expected: \"%s\" \n", av[2]);
		// printf("expected: %lu\n", substr(av[2]));
		// printf("actual : ");
		ft_putstr_fd(av[2], 0);
		printf("\n");
	}
	if (!strcmp(av[1], "putendl"))
	{
		char	*help = "\n./a.out putendl [文字列]\n\n";
		if (ac != (3))
			invalid_arg(3, help);
		printf("expected: \"%s\" \n", av[2]);
		// printf("expected: %lu\n", substr(av[2]));
		// printf("actual : ");
		ft_putendl_fd(av[2], 0);
		printf("\n");
	}
	if (!strcmp(av[1], "putnbr"))
	{
		char	*help = "\n./a.out putnbr [数字]\n\n";
		if (ac != (3))
			invalid_arg(3, help);
		printf("expected: \"%s\" \n", av[2]);
		// printf("expected: %lu\n", substr(av[2]));
		ft_putnbr_fd(atoi(av[2]), 0);
		printf("\n");
	}
	return (0);
}
