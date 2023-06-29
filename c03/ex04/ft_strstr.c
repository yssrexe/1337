#include<unistd.h>


char *ft_strstr(char *str, char *to_find)
{

	int i;
	int j;

	j = 0;
	i = 0;

	if(to_find[0] == '\0')
		return(str);

	while(str[i])
	{
		while(str[i + j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
				return (str + i);
			else
				j++;
		}
		i++;
	}
	return(NULL);

}
