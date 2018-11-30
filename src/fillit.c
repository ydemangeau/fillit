/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:02:20 by ydemange          #+#    #+#             */
/*   Updated: 2018/11/29 16:35:41 by ydemange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*get_str(char *line)
{
	char *str;
	char *tmp;

		if (!str)
			ft_strnew(1);
		tmp = ft_strjoin(str,line);
		free(str);
		str = tmp;
	return (str);
}

t_list		*get_list(int fd)
{
	t_list	*list;
	char	*line;
	char	*str;
	int		i;

	i = 0;
	while (get_next_line(fd,&line) > 0)
	{
		//chech error
		if (i != 4)
		{
			str = get_str(line);
			i++;
		}
		else
		{
			if (!list)
				list = ft_lstnew(str,ft_strlen(str));
			ft_lstadd(&list,ft_lstnew(str,ft_strlen(str)));
			free(str);
			i = 0;
		}
		free(line);
	}
	return (list);
}

int		main(int argc, char **argv)
{
	t_list	*list;
	int		fd;
	int		retour;

	if (arg_error(argc,argv))
		return (-1);
	fd = open(argv[1],O_RDONLY);
	list = get_list(fd);
	//TEST LISt
	return (0);
}
