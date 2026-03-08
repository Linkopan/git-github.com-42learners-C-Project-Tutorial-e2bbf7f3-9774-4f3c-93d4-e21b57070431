/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereboule <ereboule@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:34:49 by ereboule          #+#    #+#             */
/*   Updated: 2026/03/08 18:34:54 by ereboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush(int n, int m)
{
	int	col;
	int	row;

	row = 0;
	if (n <= 0 || m <= 0 || n > 2147483647 || m > 2147483647)
		return ;
	while (row < m)
	{
		col = 0;
		while (col < n)
		{
			if ((row == 0 && col == 0) || (row == 0 && col == n - 1)
				|| (row == m - 1 && col == 0) || (row == m - 1 && col == n - 1))
				ft_putchar('o');
			else if (row == 0 || row == m - 1)
				ft_putchar('-');
			else if (col == 0 || col == n - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col ++;
		}
		ft_putchar('\n');
		row++;
	}
}
