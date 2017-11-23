/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchamsed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:33:17 by bchamsed          #+#    #+#             */
/*   Updated: 2017/11/07 14:33:19 by bchamsed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*str;

	i = 0;
	if (min >= max)
	{
		str = 0;
		return (str);
	}
	str = malloc(sizeof(int) * (max - min));
	if (str == NULL)
		return (0);
	while (i < (max - min))
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
