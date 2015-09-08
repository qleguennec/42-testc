#include <string.h>
#include <stdio.h>

char *ft_strupcase(char*);

void	test()
{
	char	test[1024];
	strcpy(test, "42 \\ Born - To - Code");
	printf("%s", ft_strupcase(test));
}
