#include <unistd.h>

int check_double2(char *str, char c)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return 0;
        }
        
        i++;
    }
    return 1;
}

int check_double(char *str, char c, int num)
{
    int i = 0;

    while (i < num)
    {
        if (str[i] == c)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void ft_union(char *str, char *str1)
{
    int i = 0;
    int l = 0;

    while (str[i] != '\0')
    {
        if (check_double(str, str[i], i) == 1)
        {
            write(1, &str[i], 1);
        }
        
        i++;
    }
    
    while (str1[l])
    {
        if (check_double2(str, str1[l]) == 1)
        {
            if (check_double(str1, str1[l], l) == 1)
            {
                write(1, &str1[l], 1);
            }
            
        }
        l++;
    }
    
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1] ,av[2]);
    }
    write(1, "\n", 1);

    return 0;
}