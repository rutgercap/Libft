/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 15:34:35 by rcappend      #+#    #+#                 */
/*   Updated: 2021/11/03 14:23:37 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = (char *)s + ft_strlen(s);
	while (TRUE)
	{
		if (*found == (char)c)
			return (found);
		if (found == s)
			break ;
		found--;
	}
	return (NULL);
}
