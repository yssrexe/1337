#include<unistd.h>

int ft_iterative_factorial(int nb)
{
	int res;

	res = 1;

	if(nb < 0)
		return(0);

	while(nb)
		res *= nb--;
	return(res);
}
