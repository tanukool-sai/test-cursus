#include <stdlib.h>

extern int	malloc_time;

void	*ft_malloc(size_t size)
{
	void	*p;

	if (malloc_time > 0)
	{
		malloc_time--;
		p = malloc(size);
		return (p);
	}
	return (0);
}
