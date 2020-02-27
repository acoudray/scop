/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4lib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 18:17:01 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 17:04:26 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <math.h>

# define SET 1
# define IDENTITY 0

typedef struct      s_mat4
{
    float m[16];
}                   t_mat4;

typedef struct      s_vect3
{
    float v[3];
}                   t_vect3;

typedef struct      s_vect4
{
    float v[4];
}                   t_vect4;

t_mat4 mat4_mul(t_mat4 mp, t_mat4 ms);

void vect3_set(t_vect3 *v, float set);
t_vect3	vect3_add(t_vect3 v1, t_vect3 v2);
//connaitre le vecteur entre 2 points
t_vect3	vect3_sub(t_vect3 v1, t_vect3 v2);
//aggrandir vecteur
t_vect3	vect3_scale(t_vect3 v, double mult);
t_vect3	vect3_mul(t_vect3 v1, t_vect3 v2);
t_vect3	vect3_cpy(t_vect3 v);
//connaitre le vecteur avec une taille de 1
t_vect3 vect3_norm(t_vect3 v);
//connaitre la longueur d'un vecteur
int vect3_long(t_vect3 v);
//connaitre le cos entre deux vecteurs
float vect3_dot(t_vect3 v1, t_vect3 v2);
//connaitre la normal d'un plan
t_vect3 vect3_cross(t_vect3 v1, t_vect3 v2);
t_vect3	vect3_rotate(t_vect3 v, t_vect3 angle);
t_vect3	vect3_rotateinv(t_vect3 v, t_vect3 angle);

void vect4_set(t_vect4 *v, float set);
t_vect4	vect4_add(t_vect4 v1, t_vect4 v2);
t_vect4	vect4_sub(t_vect4 v1, t_vect4 v2);
t_vect4	vect4_scale(t_vect4 v, double mult);
t_vect4	vect4_mul(t_vect4 v1, t_vect4 v2);
t_vect4	vect4_cpy(t_vect4 v);
t_vect4 vect4_norm(t_vect4 v);
t_vect4 matvect_mul(t_mat4 m, t_vect4 v);



