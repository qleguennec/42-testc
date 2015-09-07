#include <stdio.h>

char	*ft_strrev(char *str);

void	test(void)
{
	char *test;

	test = "42 born to code";
	printf("%s\n", test);
	printf("%s\n", ft_strrev(test));
}
