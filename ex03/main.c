/* ************************************************************************** */
/*
                */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rado andria   <adresse@ecole.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:11:30 by rado andria       #+#    #+#             */
/*   Updated: 2023/09/29 12:11:30 by rado andria      ###   ########.fr       */
/*
                */
/* ************************************************************************** */
#include "ft_div_mod.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	printf("enter a and b: ");
	scanf("%d %d",&a,&b);
	ft_div_mod(a,b,&div,&mod);
	printf("div = %d mod = %d",div,mod);
}
