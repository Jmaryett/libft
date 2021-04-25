/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chudapak <chudapak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 21:15:11 by chudapak          #+#    #+#             */
/*   Updated: 2021/04/25 21:54:46 by chudapak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d = (char*)dst; char *s = (char*)src; size_t i = 0;
	
	if ((!dst && !src) || !len)
		return (NULL);
	if (ft_strlen(dst) + 1 < len)
		return (NULL);
	while (len > 0 && s[i])
	{
		d[i] = s[i];
		i++;
		len--;
	}
	return (d);	
}