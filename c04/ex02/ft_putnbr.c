#include<unistd.h>


void ft_putchar(char c)
{
	write(1 , &c ,1);
}


void ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;

	if(n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}

	if(n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
