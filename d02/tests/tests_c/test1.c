#include <unistd.h>

int	ft_putchar( char c )
{
	write(1, &c, 1);
	return (0);
}

#include "../../ex01/ft_print_reverse_alphabet.c"

int	main( void )
{
	ft_print_reverse_alphabet();
	return (0);
}