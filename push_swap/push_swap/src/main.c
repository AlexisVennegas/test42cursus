/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:06:55 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/16 15:36:27 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// COMPROBAR LOS LEAKS DE MEMORIA
void	ft_leak(void)
{
	system("leaks push_swap");
}


// FUNCION PRINCIPAL MAIN DONDE LE LLEGAN LOS ARGUMENTOS 
int	main(int argc, char **argv)
{
	//atexit(ft_leak);
	if (argc == 1)
		return (0);
	cut_arguments(argc, argv);
	return (0);
}
