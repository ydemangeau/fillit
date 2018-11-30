#include "fillit.h"

int		arg_error(int argc, char **argv)
{
	if (argc == 2)
	{
		return (0);
	}
	else
	{
		ft_putstr("fillit: missing file operand\n");
		ft_putstr(argv[0]);
		return (1);
	}
}
