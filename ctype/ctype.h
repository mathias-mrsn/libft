#pragma once

# include <stdbool.h>

/**
 * Internal functions
 */

# define __isdigit (c) ((c > 47 && c < 58) ? 1 : 0)
# define __isalnum (c) ((__isdigit(c) || __isalpha(c)) ? 1 : 0)
# define __isascii (c) ((c >= 0 && c < 128) ? 1 : 0)
# define __isempty (c) (((c > 8 && c < 14) || c == ' ') ? 1 : 0)
# define __islower (c) ((c > 96 && c < 123) ? 1 : 0)
# define __isprint (c) ((c > 31 && c < 127) ? 1 : 0)
# define __isupper (c) ((c > 64 && c < 91) ? 1 : 0)
# define __isalpha (c) ((__isupper(c) || __islower(c)) ? 1 : 0)

# define __tolower (c) (__isupper(c) ? c + 32 : c)
# define __toupper (c) (__islower(c) ? c - 32 : c)

inline bool
__ischarset (char c, char const *charset)
{
  while (*charset) {
      if (c == *charset++) {
          return (true);
      }
  }
  return (false);
}

/**
 * External functions
 */

# define ft_isdigit (c) __isdigit(c)
# define ft_isalpha (c) __isalpha(c)
# define ft_isalnum (c) __isalnum(c)
# define ft_isascii (c) __isascii(c)
# define ft_isempty (c) __isempty(c)
# define ft_islower (c) __islower(c)
# define ft_isprint (c) __isprint(c)
# define ft_isupper (c) __isupper(c)

# define ft_tolower (c) __tolower(c)
# define ft_toupper (c) __toupper(c)

#define ft_ischarset(c, charset) __ischarset(c, charset)
