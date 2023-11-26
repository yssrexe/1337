#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

void last_world(char *str)
{
    int len = ft_strlen(str) - 1;

    while (str[len] == '\t' || str[len] == 32)
        len--;
    
    while (len > 0)
    {
        if (str[len] == '\t' || str[len] == 32)
            break;
        len--;
    }
    len++;

    while ( str[len] != '\0' && (str[len] != '\t' || str[len] != 32))
    {
        write(1, &str[len], 1);
        len++;
    }
}



int main(int arc, char **arv)
{
    int i = 0;

    if (arc == 2)
    {
        last_world(arv[1]);
    }
    write(1, "\n", 1);
}