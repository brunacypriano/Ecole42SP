/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:27:51 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/05 14:51:52 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char n[6];

	n[2] = ' ';
	n[0] = 47;
	n[1] = 47;
	while (n[0]++ < '9')
	{
		while (n[1]++ < '9')
		{
			n[3] = n[0];
			n[4] = n[1];
			while (n[3]++ < '9')
			{
				while (n[4]++ < '9')
				{
					write(1, &n, 5);
					if (n[0] != '9' || n[1] != '8')
						write(1, ", ", 2);
				}
				n[4] = 47;
			}
		}
		n[1] = 47;
	}
}
