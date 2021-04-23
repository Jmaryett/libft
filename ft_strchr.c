/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaryett <jmaryett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:45:15 by jmaryett          #+#    #+#             */
/*   Updated: 2021/04/23 19:11:43 by jmaryett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	if ((char)ch == '\0')
	{
		while (*str)
		{
			if (*str == '\0')
				return ((char*)str);
			str++;
		}
		return ((char*)str);
	}
	if (*str == '\0')
		return (NULL);
	while (*str)
	{
		if (*str == (char)ch)
			return ((char*)str);
		str++;
	}
	return (NULL);
}
