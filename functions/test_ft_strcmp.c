#include <string.h>
#include <stdio.h>

void	test()
{
	char	test[1024];

	strcpy(test, "born to code");
	printf("%s\n", test);

	printf("%d\n", ft_strcmp(test, "born to code"));
	printf("%d\n", strcmp(test, "born to code"));
	printf("\n");
	
	printf("%d\n", ft_strcmp(test, "a"));
	printf("%d\n", strcmp(test, "a"));
	printf("\n");
	
	printf("%d\n", ft_strcmp(test, "k;osfdijgsdfgu9d8faugs"));
	printf("%d\n", strcmp(test, "k;osfdijgsdfgu9d8faugs"));
	printf("\n");
	
	printf("%d\n", ft_strcmp(test, "aaaaaaaaaaaa"));
	printf("%d\n", strcmp(test, "aaaaaaaaaaaa"));
	printf("\n");
	
	printf("%d\n", ft_strcmp(test, "BORN TO CODE"));
	printf("%d\n", strcmp(test, "BORN TO CODE"));
	printf("\n");
	
	printf("%d\n", ft_strcmp(test, "ZZZZZ"));
	printf("%d\n", strcmp(test, "ZZZZZ"));
	printf("\n");

	strcpy(test, "abcdef");

	printf("%d\n", ft_strcmp(test, "ABCDEF"));
	printf("%d\n", strcmp(test, "ABCDEF"));
	printf("\n");

	printf("%d\n", ft_strcmp(test, "ABEF"));
	printf("%d\n", strcmp(test, "ABEF"));
	printf("\n");
}
