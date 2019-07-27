/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:58:35 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 09:58:38 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowercase(char *str, int *i)
{
	if (str[*i] >= 'a' && str[*i] <= 'z')
	{
		if (str[*i - 1] < 'a' || str[*i - 1] > 'z')
		{
			if (str[*i - 1] < 'A' || str[*i - 1] > 'Z')
			{
				if (str[*i - 1] < '0' || str[*i - 1] > '9')
					str[*i] = str[*i] - ('a' - 'A');
			}
		}
	}
}

void	ft_uppercase(char *str, int *i)
{
	if (str[*i] >= 'A' && str[*i] <= 'Z' && *i != 0)
	{
		if (str[*i - 1] < 'a' || str[*i - 1] > 'z')
		{
			if (str[*i - 1] < 'A' || str[*i - 1] > 'Z')
			{
				if (str[*i - 1] < '0' || str[*i - 1] > '9')
					str[*i] = str[*i];
				else
					str[*i] = str[*i] + ('a' - 'A');
			}
			else
				str[*i] = str[*i] + ('a' - 'A');
		}
		else
			str[*i] = str[*i] + ('a' - 'A');
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_lowercase(str, &i);
		ft_uppercase(str, &i);
		i++;
	}
	return (str);
}
