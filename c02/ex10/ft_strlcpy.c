#include<unistd.h>

int *strlcpy(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int x;

	x = strlcpy(str);
	i = 0;

	if(size != 0)
	{
		while(src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(x);
}
