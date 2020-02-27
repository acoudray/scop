/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glshader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:52:12 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/27 14:22:47 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

int				debug_shader(unsigned int shader, int i)
{
	int success;
	char infolog[512];

	success = 0;
	if (i == SHADER)
		glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
	else if (i == PROGRAM)
		glGetProgramiv(shader, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(shader, 512, NULL, infolog);
		printf("%s\n", infolog);
		return (-1);
	}
	return (0);
}

int 		ft_get_shadersource(t_env *e)
{
	GLchar const *vertexsource;
	GLchar const *fragmentsource;
	unsigned int    vertexShader;
	unsigned int	fragmentShader;

	if ((vertexsource = get_shader("../shaders/vertexshader.glsl")) == 0 ||
		(fragmentsource = get_shader("../shaders/fragmentshader.glsl")) == 0)
	{
		ft_putendl("fail open shader path\n");
		return (-1);
	}
	if (shader_init(vertexsource, GL_VERTEX_SHADER, &vertexShader) == -1)
		return (-1);
	if (shader_init(fragmentsource, GL_FRAGMENT_SHADER, &fragmentShader) == -1)
		return (-1);
	e->shaderprogram = glCreateProgram();
	glAttachShader(e->shaderprogram, vertexShader);
	glAttachShader(e->shaderprogram, fragmentShader);
	glLinkProgram(e->shaderprogram);
	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);
	return (0);
}

GLchar const *  get_shader(const char *path)
{
	char    *vertexShaderSource;
	int     fd;
	char	*line;

	vertexShaderSource = 0;
	if ((fd = open(path, O_RDONLY)) == -1)
		return (0);
	while (get_next_line(fd, &line))
	{
		if (vertexShaderSource == NULL)
		{
			vertexShaderSource = malloc (sizeof(char) * ft_strlen(line) + 1);
			vertexShaderSource = ft_strcpy(vertexShaderSource, line);
		}
		else
			ft_strappend(&vertexShaderSource, line);
		ft_strcadd_right(&vertexShaderSource, '\n', 1);
		free(line);
	}
	return (vertexShaderSource);
}

int			    shader_init(GLchar const *shadersource, unsigned int shadertype, unsigned int *shader)
{
	*shader = glCreateShader(shadertype);
	glShaderSource(*shader, 1, &shadersource, NULL);
	glCompileShader(*shader);
	if (debug_shader(*shader, SHADER) == -1)
		return (-1);
	return (0);
}