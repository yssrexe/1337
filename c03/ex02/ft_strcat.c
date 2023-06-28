char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0:
	j = 0;

	while(!dest || !src)
	{
		return(dest);
	}

	while(dest[i])
		i++;

	while(src[i])
	{	
		dest[i + j] = src[i];
		j++;
	}

	dest[i + j] = '\0';
    	return (dest);

}
