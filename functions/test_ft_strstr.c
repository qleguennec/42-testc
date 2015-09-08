#include <string.h>
#include <stdio.h>

void	*ft_strstr(char*, char*);

void	test()
{
	char	test[1024];
	char c;
	ft_strcpy(test, "born to code");
	printf("%s\n", test);
	printf("%s\n", ft_strstr(test, "o cod"));
	printf("%s\n", ft_strstr(test, "e"));
	printf("%s\n", ft_strstr(test, "a"));
}
