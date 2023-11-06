#include <unistd.h>

void printnumber(int nbr)
{
    if (nbr >= 10)
    {
        printnumber(nbr / 10);
    }
    nbr = nbr % 10 + '0';
    write(1, &nbr, 1);
}

int main(void)
{
    int nbr = 1;
    while (nbr <= 100)
    {
        if ((nbr % 5 == 0) && (nbr % 3 == 0))
        {
            write(1, "fizzbuzz", 8);
        } else if (nbr % 3 == 0)
        {
            write(1, "fizz", 4);
        } else if (nbr % 5 == 0)
        {
            write(1, "buzz", 4);
        } else
        {
            printnumber(nbr);
        }
        write(1, "\n", 1);
        nbr++;
    }
    
}