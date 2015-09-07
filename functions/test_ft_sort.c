#include <stdio.h>

void	test(void);

void	test(void)
{
	int tab[13] = {93, 210, 334, 2, 5, 8, 1, 2, 1, 4, 6, 3, 7};
	int cpt = 0;

	ft_sort_integer_table(tab, 13);
	while (cpt < 13)
	{
		printf("%d, ", tab[cpt]);
		cpt++;
	}
}
