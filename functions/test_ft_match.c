#include <string.h>
#include <stdio.h>

int		match(char *str, char *to_find);

void	test()
{
	char	test[1024];
	strcpy(test, "born to code");
	printf("%d\n", match(test, "born to code"));
	printf("%d\n", match(test, "*"));
	printf("%d\n", match(test, "**"));
	printf("%d\n", match(test, "born to code"));
	printf("%d\n", match(test, "*e"));
	printf("%d\n", match(test, "*rn *"));
	printf("%d\n", match(test, "a"));
	printf("%d\n", match(test, ""));
	printf("%d\n", match(test, "*to"));
}
