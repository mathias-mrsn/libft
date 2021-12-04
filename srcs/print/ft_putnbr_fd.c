#include "libft.h"

void __putnbr(int n, int fd)
{
	unsigned int nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (n < 0)
		__putchar('-', fd);
	if (nb > 9)
		__putnbr(nb / 10, fd);
	__putchar(nb % 10 + 48, fd);
}
