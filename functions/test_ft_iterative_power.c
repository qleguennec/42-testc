#include <stdio.h>

int		ft_iterative_power(int nb, int power);

void	test(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(-1, 4));
	printf("%d\n", ft_iterative_power(2, -3));
}


void	test_time(void)
{
	printf("%d\n", ft_iterative_power(10, 10));
}


