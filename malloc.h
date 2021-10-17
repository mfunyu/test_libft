#ifndef MALLOC_H
# define MALLOC_H
# include <stddef.h>

# define malloc(size) wrapper_malloc(size)

void	*wrapper_malloc(size_t size);

#endif
