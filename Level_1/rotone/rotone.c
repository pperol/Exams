#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	
	if (ac == 2)
	{
		while(av[1][i])
		{ 
			if (av[1][i] == 90 || av[1][i] == 122)
				av[1][i] = av[1][i] - 25;
			else if ((av[1][i] >= 65 && av[1][i] <= 89) || (av[1][i] >= 97 && av[1][i] <= 121)) 
				av[1][i] = av[1][i] + 1;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
