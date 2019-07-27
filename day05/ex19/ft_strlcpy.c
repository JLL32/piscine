/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:14:26 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 10:14:29 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int srclen;
	unsigned int i;

	srclen = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
