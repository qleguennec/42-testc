#include <stdio.h>

int		ft_recursive_power(int nb, int power);

void	test(void)
{
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(5, 2));
	printf("%d\n", ft_recursive_power(10, 4));
	printf("%d\n", ft_recursive_power(2, 3));
}
