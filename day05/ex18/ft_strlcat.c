/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:13:57 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 10:14:08 by ael-hach         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dlen;
	unsigned int slen;
	unsigned int i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while (i < size - dlen - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
