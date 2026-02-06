#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	char	n;

	n = '\n';
	write(1, &c, 1);
	write(1, &n, 1);
}

int	main(void)
{
	ft_putchar('c');
}
