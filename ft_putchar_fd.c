/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 15:42:21 by rcappend      #+#    #+#                 */
/*   Updated: 2021/01/19 10:03:54 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
