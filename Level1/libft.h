/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <jthanikp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:09:10 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/16 18:44:15 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dest,const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif