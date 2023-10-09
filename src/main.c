/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:48:02 by nikitos           #+#    #+#             */
/*   Updated: 2023/10/09 13:29:57 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

// void	*routine(void *data_pointer)
// {
// 	printf("asd");
// }

int	main(int ac, char **av)
{
	t_data	*data;
	t_philo	*philos;

	if ((ac != 5 && ac != 6) || !check_input(av))
	{
		incorrect_input();
		exit(0);
	}
	philos = malloc(sizeof(t_philo) * ft_atoi(av[1]));
	data = parse_data(av);
	return (0);
}
