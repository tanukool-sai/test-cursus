#include <assert.h>
#include <stdio.h>

#include "libft.h"

int	main(void)
{
	assert(ft_isalnum('a') != 0);
	assert(ft_isalnum(' ') == 0);
	assert(ft_isprint(' ') == 0);
}
