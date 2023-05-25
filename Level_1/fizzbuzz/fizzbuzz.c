#include <unistd.h>

void putnb(int nb)
{
	char base[10] = "0123456789";
	if (nb >= 10)
		putnb(nb / 10);
	write(1, &base[nb % 10], 1);
}

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnb(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
