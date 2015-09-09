#include <string.h>
#include <stdio.h>

char *ft_strupcase(char*);

void	test()
{
	char	test[1024];
	strcpy(test, "42 \\ Born - To - Code");
	printf("%s\n", ft_strupcase(test));
	strcpy(test, "e#)($*@)oihr23p09u2p34hto23i4ht09348th2oht01924R092H08YHEFWOH");
	printf("%s\n", ft_strupcase(test));
	strcpy(test, "");
	printf("%s\n", ft_strupcase(test));
}
