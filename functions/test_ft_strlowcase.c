#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char*);

void	test()
{
	char	test[1024];
	strcpy(test, "42 \\ BoRn - to - coDE");
	printf("%s", ft_strlowcase(test));
}
