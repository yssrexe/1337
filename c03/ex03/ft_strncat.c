char *ft_strncat(char *dest, char *src, unsigned int nb)
{

	unsigned int i;
	unsigned int j;


	while(!dest || !src)
	{
		return (dest);
	}

	while(dest[i])
	
		i++;


	while(src[i] && j < nb)
	{
		dest[i + j] = src[i];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);

}
