/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseribe <joseribe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 09:43:17 by joseribe          #+#    #+#             */
/*   Updated: 2026/11/04 10:51:51 by joseribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dest;
	s = (const char *) src;
	if ((d == s) || (n = 0))
		return (dest);
	else
	{
		while (n > 0)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	return (dest);
}
