#include <unistd.h>

int main(int arc, char **arv)
{
    int i = 0;

    if (arc >= 2)
    {
        int num = arc - 1;
        while (arv[num][i])
        {
            write(1, &arv[num][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}