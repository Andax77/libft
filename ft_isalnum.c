/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:36:46 by anhuang           #+#    #+#             */
/*   Updated: 2017/11/16 18:25:07 by anhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((c >= '0' && c <= '9')) || (c >= 'A' && c <= 'Z') || (c >= 'a' &&
			c <= 'z'))
		return (1);
	return (0);
}
