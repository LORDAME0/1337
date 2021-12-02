/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:56:55 by orahmoun          #+#    #+#             */
/*   Updated: 2021/12/01 20:12:06 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int		ft_printf(const char *, ...);
int    ft_putchar_fd(char c, int fd);
int    ft_putnbr_fd(int n, int fd);
int    ft_putnbr_u_fd(unsigned int n, int fd);
int    ft_putnbr_base(unsigned int nbr, char *base);
int    ft_putnbr_base_long(unsigned long nbr, char *base);
int    ft_putstr_fd(char *s, int fd);
int    ft_putchar_fd(char c, int fd);
size_t  ft_strlen(const char *s);
#endif