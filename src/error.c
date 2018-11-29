#include "fillit.h"

int		arg_error(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		return (0);
		}
	else
	{
		ft_putstr("fillit: missing file operand\n");
		return (1);
	}
}
