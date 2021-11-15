#include "../../includes/ft_printf.h"

void	ft_putnbr_bis(int n, int fd, t_options *options)
{
	unsigned int nb;

	if(n < 0)
		nb = -n;
	else
		nb = n;
	if(n < 0)
		ft_putchar_bis('-', fd, options);
	if(nb > 9)
		ft_putnbr_bis(nb / 10, fd, options);
	ft_putchar_bis(nb % 10 + 48, fd, options);
}

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


void	ft_putstr_bis(char *str, int nb, t_options *options)
{
	if(nb == 0)
		return;
	while(*str && nb--)
		ft_putchar_bis(*str++, 1, options);
}