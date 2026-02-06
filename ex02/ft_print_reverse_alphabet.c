#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	c;
	char	n;

	c = 'z';
	n = '\n';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, &n, 1);
}

int		main()
{
	ft_print_reverse_alphabet();
}
