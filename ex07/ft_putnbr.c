#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	number;

	number = nb;
	write(1, &number, sizeof(int));
}

int main(void)
{
	int number;

	number = 575153;
	ft_putnbr(number);
	return (0);
}