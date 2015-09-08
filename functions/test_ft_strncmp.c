#include <string.h>
#include <stdio.h>

void	test()
{
	char	test[1024];

	ft_strcpy(test, "born to code");
	printf("%s\n", test);

	printf("%d\n", ft_strncmp(test, "born to code", 12));
	printf("%d\n", strncmp(test, "born to code", 12));
	printf("\n");
	
	printf("%d\n", ft_strncmp(test, "aaaaaaaaaaaa", 12));
	printf("%d\n", strncmp(test, "aaaaaaaaaaaa", 12));
	printf("\n");
	
	printf("%d\n", ft_strncmp(test, "BORN TO CODE", 12));
	printf("%d\n", strncmp(test, "BORN TO CODE", 12));
	printf("\n");
	
	printf("%d\n", ft_strncmp(test, "ZZZZZ", 5));
	printf("%d\n", strncmp(test, "ZZZZZ", 5));
	printf("\n");

	ft_strcpy(test, "abcdef");

	printf("%d\n", ft_strncmp(test, "ABCDEF", 6));
	printf("%d\n", strncmp(test, "ABCDEF", 6));
	printf("\n");

	printf("%d\n", ft_strncmp(test, "ABEF", 7));
	printf("%d\n", strncmp(test, "ABEF", 7));
	printf("\n");
}
