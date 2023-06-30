#include<unistd.h>

int ft_putchar(char c)
{
	write(1 , &c , 1);
}

int ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i])
		i++;
	return(i);
}


int valid(char *base)
{
	int j;
	int i;

	i = 0;
	if (ft_strlen(base) < 2)
		return(0);

	while(base[i])
	{
		if(base[i] == '+' || base[i] == '-')
			return(0);
		i++;
	}

	i = 0;
	while(base[i])
	{
		j = i + 1;
		while((base[i] != base[j]) && base[j]
			j++;
		while(base[i] = base[j])
			return(0);
		i++;	
	}
	return (1);
}








