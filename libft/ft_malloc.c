#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	malloc_time = INT_MAX;

void	*malloc(size_t size)
{
	void	*p;
	static void	*(*real_malloc)(size_t) = NULL;

	if (!real_malloc)
		real_malloc = dlsym(RTLD_NEXT, "malloc");

	if (malloc_time > 0)
	{
		malloc_time--;
		p = real_malloc(size);
		return (p);
	}
	return (0);
}
