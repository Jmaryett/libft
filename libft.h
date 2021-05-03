/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chudapak <chudapak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:01:38 by jmaryett          #+#    #+#             */
/*   Updated: 2021/04/25 19:42:00 by chudapak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
void ft_putchar_fd(char c, int fd);

#endif