/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dengstra <dengstra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 12:17:09 by dengstra          #+#    #+#             */
/*   Updated: 2017/06/07 12:18:01 by dengstra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_only_char(char *str, char c)
{
	while (*str)
		if (*str++ != c)
			return (0);
	return (1);
}
