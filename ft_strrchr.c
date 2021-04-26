/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaryett <jmaryett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:13:05 by jmaryett          #+#    #+#             */
/*   Updated: 2021/04/23 19:18:22 by jmaryett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char c = (char)ch; char *s = (char*)str;
	size_t i = ft_strlen(str);
	
	if (!str || !ch)
		return (NULL);
	if (c == '\0')
		return (&s[i + 1]);
	while (i > 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
