int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    char rev;
    while (i < len)
    {
        rev = str[i];
        str[i] = str[len];
        str[len] = rev;

        i++;
        len--;
    }
    return (str);
}