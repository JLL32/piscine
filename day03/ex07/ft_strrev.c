/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 04:17:22 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/10 14:35:40 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		last;
	char	temp;

	last = ft_strlen(str) - 1;
	i = 0;
	while (i <= (last / 2))
	{
		temp = str[i];
		str[i] = str[last - i];
		str[last - i] = temp;
		i++;
	}
	return (str);
}
