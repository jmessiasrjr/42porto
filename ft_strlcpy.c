/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseribe <joseribe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 09:43:17 by joseribe          #+#    #+#             */
/*   Updated: 2026/11/04 11:32:48 by joseribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
// Older strlcpy -> this doesn't work properly
/*	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		i++;
	}
	if (j > 0)
	{
		dest[j] = '\0';
	}
	return (i);
*/
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}
