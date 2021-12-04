#include "libft.h"

int	__nbrlen_base(int64_t nbr, char *base)
{
	const uint32_t 	base_len = __strlen(base);
	int				len;

	len = 1;
	if (nbr < 0 && len++)
		nbr *= -1;
	while (nbr / base_len)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}