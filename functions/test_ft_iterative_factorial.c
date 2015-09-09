#include <stdio.h>

int		ft_iterative_factorial(int nb);

void	test(void)
{
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(-12));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(30));
}
