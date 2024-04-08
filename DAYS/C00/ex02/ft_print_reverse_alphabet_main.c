/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_main.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silico <silico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 06:04:20 by silico            #+#    #+#             */
/*   Updated: 2024/04/08 06:04:23 by silico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	 c;

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
		 c--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
}
