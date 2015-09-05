#include <stdio.h>

char	*ft_strrev(char *str);

void	test(void)
{
	char *test;

	test = "42 born to code";
	printf("%s", ft_strrev(test));
}
