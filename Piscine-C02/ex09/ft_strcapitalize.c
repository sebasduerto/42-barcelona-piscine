/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:03:23 by sduerto-          #+#    #+#             */
/*   Updated: 2024/07/15 13:53:56 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	i;
	char	*orig;

	i = '-1';
	orig = str;
	while (*[++str])
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (i == 0)
			{
				if (*str >= 'a' && *str <= 'z')
					*str = *str - ('a' - 'A');
				i = 1;
			}
			else
			{
				if (*str >= 'A' && *str <= 'Z')
					*str = *str - 'A' + 'a';
			}
		}
		else
			i = 0;
	}
	return (orig);
}