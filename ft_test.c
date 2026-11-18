/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseribe <joseribe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:54:35 by joseribe          #+#    #+#             */
/*   Updated: 2026/11/18 20:48:54 by joseribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include "ft_memchr.c"

int	main(void)
{
// ft_isalpha
	printf(
		"ft_isalpha = %d | isalpha = %d \n", 
		ft_isalpha('n'), 
		isalpha('n')
	);
// ft_isdigit
	printf(
		"ft_isdigit = %d | isdigit = %d \n",
		ft_isdigit('n'),
		isdigit('n')
	);
// ft_isalnum
	printf(
		"ft_isalnum = %d | isalnum = %d \n",
		ft_isalnum('n'), 
		isalnum('n')
	);
// ft_isascii
	printf(
		"ft_isascii = %d | isascii = %d \n",
		ft_isascii('n'),
		isascii('n')
	);
// ft_isprint
	printf(
		"ft_isprint = %d | isprint = %d \n",
		ft_isprint('n'),
		isprint('n')
	);
// ft_strlen
	const char	*s = "42Porto";
	printf(
		"ft_strlen  = %zu | strlen = %lu \n",
		ft_strlen(s),
		strlen(s)
	);
// ft_memset
	char	s1[] = "Just a bunch of words";
	char	s2[] = "Just a bunch of words";
	ft_memset(s1, '#', 6 * sizeof(char));
	memset(s2, '#', 6 * sizeof(char));
	printf(
		"ft_memset  = %s | memset = %s \n",
		s1,
		s2
	);
// ft_bzero
	ft_bzero(s1, 6 * sizeof(char));
	bzero(s2, 6 * sizeof(char));
	printf(
		"ft_bzero   = %s | bzero = %s \n",
		s1,
		s2
	);
// ft_memcpy
	char	d1[50];
	char	d2[50];
	char	s3[] = "Just a bunch of words";
	ft_memcpy(d1, s3, 6 * sizeof(char));
	memcpy(d2, s3, 6 * sizeof(char));
	printf(
		"ft_memcpy  = %s | memcpy = %s \n",
		d1,
		d2
	);
// ft_memmove
	char	d3[50];
	char	d4[50];
	char	s4[] = "Just a bunch of words";
	char	s5[] = "Just a bunch of words";
	ft_memmove(d3, s4, 10 * sizeof(char));
	memmove(d4, s5, 10 * sizeof(char));
	printf(
		"ft_memmove = %s | memmove = %s \n",
		d3,
		d4
	);
// ft_toupper
	printf(
		"ft_toupper = %d | toupper = %d \n", 
		ft_toupper('n'), 
		toupper('n')
	);
// ft_tolower
	printf(
		"ft_tolower = %d | tolower = %d \n", 
		ft_tolower('n'), 
		tolower('n')
	);
// ft_strchr
	char	*c1;
	char	*c2;
	c1 = ft_strchr(s3, 'o');
	c2 = strchr(s3, 'o');
	printf(
		"ft_strchr  = %c | strchr = %c \n",
		*(c1 + 1),
		*(c2 + 1)
	);
// ft_strrchr
	c1 = ft_strrchr(s3, 'o');
	c2 = strrchr(s3, 'o');
	printf(
		"ft_strrchr = %c | strrchr = %c \n",
		*(c1 + 1),	
		*(c2 + 1)
	);
// ft_strncmp
	printf(
		"ft_strncmp = %d | strncmp = %d \n",
		ft_strncmp(s3, s, 2),
		strncmp(s3, s, 2)
	);
// ft_memchr
	c1 = ft_memchr(s3, 'o', 15 * sizeof(unsigned char));
	c2 = memchr(s3, 'o', 15 * sizeof(unsigned char));
	printf(
		"ft_memchr  = %c | memchr = %c \n",
		*(c1 + 1),
		*(c2 + 1)
	);
	return (0);
}
