/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hazuraiq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:05:05 by hazuraiq          #+#    #+#             */
/*   Updated: 2025/08/11 20:42:16 by hazuraiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		printf("%d", ft_isdigit(*argv[1]));
// 	}
// }
