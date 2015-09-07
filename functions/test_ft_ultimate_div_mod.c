#include <stdio.h>

void	ft_ultimate_div_mod(int* a, int *b);

void	test()
{
	int a;
	int b;

	a = 42;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}
