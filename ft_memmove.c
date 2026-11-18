/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseribe <joseribe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 09:43:17 by joseribe          #+#    #+#             */
/*   Updated: 2026/11/18 18:42:20 by joseribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char	temp[n];
	char	*d;
	const char	*s;

	d = dest;
	s = src;
	i = 0;
	while (n > 0)
	{
		temp[i++] = *s;
		s++;
		n--;
	}
	while (i > 0)
	{
		*d = temp[n++];
		d++;
		i--;
	}
	return (dest);
}
