#include<unistd.h>

void ft_print_numbers(void)
{
	c = 0;
	while(c >= 9)
	{
		write(1 , &c , 10);
		c++;
	}
}

int main(void)
{
	ft_print_numbers();
	return 0;
}
