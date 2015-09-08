#include <string.h>
#include <stdio.h>

int		ft_str_is_alpha(char *str);

void	test()
{
	char	test[1024];
	strcpy(test, "42 \\ BoRn - to - coDE");
	printf("%d", ft_str_is_alpha(test));
	strcpy(test, "born to code");
	printf("%d", ft_str_is_alpha(test));
	strcpy(test, "");
	printf("%d", ft_str_is_alpha(test));
	strcpy(test, "a");
	printf("%d", ft_str_is_alpha(test));
}
