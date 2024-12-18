/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tommynchen <tochen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:02:10 by tommynche         #+#    #+#             */
/*   Updated: 2024/12/18 20:38:02 by tommynche        ###   ########.usa      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int			*ft_rrange(int start, int end)
{
	int i;
	int num_of_int_slots;
	int *ret;
	
	i = 0;
	num_of_int_slots = 0;
	if(end > start){num_of_int_slots += end - start + 1;}
	if(start > end){num_of_int_slots += start - end + 1;}
	
	ret = (int *)malloc( ( sizeof(int) * num_of_int_slots ) + 1);
	if(end == start)
	{
		ret[0] = start;
		return (ret);
	}
	if(end > start)
	{
		while(i < num_of_int_slots)
		{	
			ret[i] = end - i;
			i++;
		}
		return (ret);
	}
	if(start > end)
	{
		while(i < num_of_int_slots)
		{
			ret[i] = start - i; 
			i++;
		}
		return (ret);
	}
	return (ret);
}

/
