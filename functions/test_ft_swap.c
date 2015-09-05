#include <stdio.h>

void	test_ft_swap(void);

void	test_ft_swap(void)
{
	int a;
	int b;

	a = 4;
	b = 2;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("ft_swap\n");
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
