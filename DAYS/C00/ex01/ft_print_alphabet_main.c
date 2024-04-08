/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silico <silico@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 06:03:34 by silico            #+#    #+#             */
/*   Updated: 2024/04/08 06:03:37 by silico           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet (void)
{
	char	 c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		 c++;
	}
}
int	main()
{
	ft_print_alphabet();
	return (0);
}
