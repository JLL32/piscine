/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:55:52 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 09:55:55 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strstr_finder(int *i, int *j, char *str, char *to_find)
{
	while (str[*i] != '\0')
	{
		if (to_find[*j] == str[*i])
		{
			(*j)++;
			(*i)++;
		}
		else if (to_find[*j] == '\0')
			break ;
		else
		{
			if (*j != 0 && to_find[*j - 1] == str[*i - 1])
				(*j)--;
			else
			{
				*j = 0;
				(*i)++;
			}
		}
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	ft_strstr_finder(&i, &j, str, to_find);
	if (j > 0 && to_find[j] == '\0')
		return (&str[i - j]);
	return (0);
}
