#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	nl;
	char	c;

	c = '0';
	nl = '\n';
	while (c < '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar(nl);
}

int	main(void)
{
	ft_print_numbers();
}
