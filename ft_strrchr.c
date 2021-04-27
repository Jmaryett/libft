/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chudapak <chudapak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:13:05 by jmaryett          #+#    #+#             */
/*   Updated: 2021/04/26 18:49:09 by chudapak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char *s = (char*)str;
	size_t i = ft_strlen(str);
	
	if ((char)ch == '\0')
		return (s + i);
	while (i--)
	{
		if (s[i] == (char)ch)
			return (s + i);
	}
	return (NULL);
}
