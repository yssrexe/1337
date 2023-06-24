#include<unistd.h>

void ft_ft(int *p)
{
	*p = 42;
}

int main()
{
	int n = 1492;
	write(1 , "before-> %d/n",n , 10 );
	ft_ft(&n);
	printf("after-> %d\n" , n);
}
