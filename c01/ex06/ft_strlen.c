/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 01:48:34 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/05 19:40:44 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int init;

	init = 0;
	while (*str != '\0')
	{
		init++;
		str++;
	}
	return (init);
}
