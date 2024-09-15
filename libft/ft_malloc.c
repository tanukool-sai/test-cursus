#include <time.h>
#include <stdlib.h>

#ifndef MALLOC_SUCCESS_RATE 
# define MALLOC_SUCCESS_RATE 10
#endif

void	*ft_malloc(size_t size)
{
	void	*p;

	int r = rand() / RAND_MAX * 10;
	if (r <= MALLOC_SUCCESS_RATE)
	{
		p = malloc(size);
		return (p);
	}
	return (0);
}
