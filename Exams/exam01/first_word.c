#include <unistd.h>

int main(int arc, char **arg)
{
    if (arc == 2)
    {
        int i = 0;
        while (arg[1][i] == 32 || (arg[1][i] >= 9 && arg[1][i] <= 13))
            i++;
        
        while ((arg[1][i] != 9 || arg[1][i] != 32) && arg[1][i] != '\0')
        {
            write(1, &arg[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}