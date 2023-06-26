#include<unistd.h>

char *ft_capitale(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return str;
}

char *ft_strcapitalize(char *str)
{
	int i;
	int i1;

	i = 0;
	i1 = 1;

	ft_capitale(str);
	
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(i1 == 1)
			{
				str[i] -= 32;
				i1 = 0;
			} 
			else if(str[i] >= '0' && str[i] <= '9')
				i1 = 0;
			else 
				i1 = 1;
			i++;
		}
		return (str);
	}
	




}
