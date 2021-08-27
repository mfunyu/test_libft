#include "libft.h"
#include <stdio.h>
#include <string.h>

void	result(int ok)
{
	if (ok)
		printf(" -> [✅ ]\n");
	if (!ok)
		printf(" -> [❌ ]\n");
}

int		test_lst(t_list *l, void *expected, int index)
{
	printf("EX: [\"%s\"]\n", expected);
	if (index == 0)
	{
		if (!l->content)
			return(1);
		return (0);
	}
	if (index == 1)
	{
		if (!strcmp(l->content, expected))
			return(1);
		return (0);
	}
	if (index == 2)
	{
		if (l->content == expected)
			return(1);
		return (0);
	}
	return (2);
}

int		main()
{
	/* ft_lstnew */
	int num = 12;
	char *str = "\n  \t   hello";
	printf("-------- ft_lstnew  --------\n");
	result(test_lst(ft_lstnew(strdup("OK")), "OK", 1));
	result(test_lst(ft_lstnew(strdup("    ")), "    ", 1));
	result(test_lst(ft_lstnew(strdup("")), "", 1));
	result(test_lst(ft_lstnew(str), str, 1));
	result(test_lst(ft_lstnew(&num), &num, 2));
	result(test_lst(ft_lstnew(((void *)0)), 0, 0));


	/* ft_lstadd_front */
	t_list *l = ft_lstnew(strdup("NEXT"));
	t_list *new;

	printf("-------- ft_lstadd_front  --------\n");

	ft_lstadd_front(&l, new = ft_lstnew("OK"));
	result(test_lst(l, "OK", 1));
	// ft_lstadd_front(&l = ft_lstnew(""), new = ft_lstnew(""));
	// result(test_lst("    ", "    ", 1));
	// ft_lstadd_front(&l = ft_lstnew(""), new = ft_lstnew(""));
	// result(test_lst("", "", 1));
	// ft_lstadd_front(&l = ft_lstnew(""), new = ft_lstnew(""));
	// result(test_lst(str, str, 1));
	// ft_lstadd_front(&l = ft_lstnew(""), new = ft_lstnew(""));
	// result(test_lst(&num, &num, 2));
	// ft_lstadd_front(&l = ft_lstnew(""), new = ft_lstnew(""));
	// result(test_lst(((void *)0), 0, 0));
	return 0;
}