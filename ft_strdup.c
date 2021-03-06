/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 15:42:32 by rcappend      #+#    #+#                 */
/*   Updated: 2021/01/19 10:03:54 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strdup(const char *s1)
{
	char		*save;
	size_t		i;

	save = (char *)malloc(ft_strlen(s1) + 1);
	if (!save)
		return (NULL);
	i = 0;
	while (*s1)
	{
		save[i] = *s1;
		i++;
		s1++;
	}
	save[i] = '\0';
	return (save);
}
