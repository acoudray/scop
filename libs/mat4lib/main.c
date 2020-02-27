/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:04:12 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 16:13:02 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/mat4lib.h"

void test_vect_set()
{
    t_vect3 v;
    int i;

    i = -1;
    vect3_set(&v, 2);
    while(++i < 3)
    {
        printf("v[%d] = %f\n", i, v.v[i]);        
    }
}

int main()
{
    test_vect_set();
    /*
    //t_mat4 m = {1,3,2,6,2,1,2,3,5,0,1,0,1,2,3,2};
    t_mat4 mul = {1, 3, 2, 6, 2, 1, 2, 0, 5, 0 ,1, 3, 1, 2, 3,2};
    t_mat4 mul2 = {2,3,2,0,4,1,2,3,3,0,1,3,1,3,0,2};
    t_mat4 res;
    //t_vect4 v = {3,4,5,1};
    //t_vect4 z;
    int i;

    i = -1;
    res = mat4_mul(mul, mul2);
    while(++i < 16)
    {
        printf("v[%d] = %f\n", i, res.m[i]);        
    }
    z = matvect_mul(m, v);
    while (++i < 4)
        printf("v[%d] = %f\n", i, z.v[i]);
   */
   return (0); 
}