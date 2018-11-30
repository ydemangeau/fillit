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

t_list		*get_list(int fd)
{
	t_list *list;
	char *line;
	char *tmp;
	char *str;
//DECOUPER EN 2 FCT retourstr -> aloue list -> memdel str;
	while (get_next_line(fd, &line) > 0)
	{
		if (check
		if (line[0] != '\n')
		{
			if (!str)
				ft_strnew(1);
			tmp = ft_strjoin(str,line);
			free(str);
			str = tmp;
		}
		else
		{
			if (!list)
				list = ft_lstnew(str,ft_strlen(str));
			ft_lstadd(&list,ft_lstnew(str,ft_strlen(str)));
		}
		free(line);
	}
	return (list);
}

int		main(int argc, char **argv)
{
	t_list *list;
	int fd;
	int retour;
	int i;

	if (arg_error(argc,argv))
		return (-1);
	fd = open(argv[1],O_RDONLY);
	list = get_list(fd);
	return (0);
}
