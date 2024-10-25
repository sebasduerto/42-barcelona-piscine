/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:33:18 by sduerto-          #+#    #+#             */
/*   Updated: 2024/07/24 18:52:10 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*st;
	char	*tf;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		st = str;
		tf = to_find;
		while (*st != '\0' && *tf != '\0' && *st == *tf)
		{
			st++;
			tf++;
		}
		if (*tf == '\0')
			return (str);
		str++;
	}
	return (0);
}