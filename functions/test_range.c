#include <stdio.h>

int	 main(void)
{
	int i;

	i = A1;
	while(i <= A2)
	{
		printf("%d: %d\n", i, F_ARG(i));
		i++;
	}
	return 0;
}
