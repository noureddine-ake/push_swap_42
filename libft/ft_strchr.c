/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:47:26 by nakebli           #+#    #+#             */
/*   Updated: 2023/03/11 16:37:58 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if ((char)*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == c)
		return ((char *)str);
	return (NULL);
}
