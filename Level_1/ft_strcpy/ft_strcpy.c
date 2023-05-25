#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	size_t i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int main(void)
{
	char *test = "Ceci est un test.";
	char cpy[100];
	printf("%s\n", ft_strcpy(cpy, test));
	return (0);
}

