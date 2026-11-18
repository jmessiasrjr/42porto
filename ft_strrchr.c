/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseribe <joseribe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:48:26 by joseribe          #+#    #+#             */
/*   Updated: 2026/11/18 20:30:32 by joseribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	while (*s != '\0')
	{
		if (*s == c)
			p = (char *) s;
		s++;
	}
	if (p)
		return ((char *) p);
	else
		return (NULL);
}
