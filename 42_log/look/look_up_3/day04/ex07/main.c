/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 01:25:40 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/12 22:59:29 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int main(){
	int i = ft_find_next_prime(7);
	printf("%i\n", i);
}