#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/time.h>

int	get_rand(void)
{
	struct timeval	t1;

	gettimeofday(&t1, NULL);
	srand(t1.tv_usec * t1.tv_sec);
	return (rand());
}

void	*wrapper_malloc(size_t size)
{
	void	*ptr;

	if (get_rand() % 2)
	{
		ptr = malloc(size);
	}
	else
	{
		ptr = NULL;
		errno = ENOMEM;
	}
	printf("malloc(%d) = %p\n", (int)size, ptr);
	return (ptr);
}
