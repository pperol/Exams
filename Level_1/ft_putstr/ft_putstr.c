#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int main(void)
{
	ft_putstr("Ceci est un test.");
	write(1, "\n", 1);
	return (0);
}
