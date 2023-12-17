#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void search_and_replace(char *str, char *s2, char *s3)
{
    int i , j , k, y, t;
    i = 0;
    j = 0;
    k = 0;

    y = ft_strlen(s2);
    t = ft_strlen(s3);

    if (y < 2 && t < 2)
    {
        while (str[i])
        {
            if (str[i] == s2[j])
            {
                str[i] = s3[k];
            }
            write(1, &str[i], 1);
            i++;
        }
    }   
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        search_and_replace(av[1], av[2], av[3]);
    }
    write(1, "\n", 1);
}