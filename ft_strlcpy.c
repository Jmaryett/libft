/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaryett <jmaryett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:46:56 by jmaryett          #+#    #+#             */
/*   Updated: 2021/04/23 21:48:35 by jmaryett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	size_t		n;

	i = 0;
	if (!dst || !src)
		return (0);
	if (len > 0)
	{
		while (src[i] && --len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	n = ft_strlen(src);
	return (n);
}
