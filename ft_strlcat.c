/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseribe <joseribe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 09:43:17 by joseribe          #+#    #+#             */
/*   Updated: 2026/11/04 11:35:50 by joseribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
// Older strlcat -> this doesn't work properly
/*	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		if (j < size - 1)
			dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
*/
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}
