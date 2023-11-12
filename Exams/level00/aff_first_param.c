#include <unistd.h>

int main(int arc , char **arv)
{
    int i = 0;
    if (arc >= 2)
    {
        while(arv[1][i])
        {
            write(1, &arv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}