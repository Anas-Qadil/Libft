#include "libft.h"

#include <stdio.h>
int main(void)
{
    printf("%d", ft_isdigit(3));
}


int main(void)
{
	char *str = "hello world";
    printf("%s", ft_memset(str, 'a', 7));
}


int main(void)
{
	char *str = "hello world";
	ft_bzero(str, 11);
    printf("%s", str);
	return (0);
}
// ft_memcpy


int main(void)
{
	char str[30] = "hello world";
	char str2[40] = "anas";
    printf("%s", ft_memcpy(str, str2, 4));
}
