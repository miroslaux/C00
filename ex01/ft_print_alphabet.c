#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	a;
	char	n;

	n = '\n';
	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
	write(1, &n, 1);
}

int	main(void)
{
	ft_print_alphabet();
}
