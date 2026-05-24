/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalayan <jbalayan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:24:13 by jbalayan          #+#    #+#             */
/*   Updated: 2026/05/23 19:24:14 by jbalayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;

// 02_validation.c
int		is_valid_number(char *str);

// 03_file_reader.c
char	*read_file(char *path);

// 04_parsing.c
char	**split_lines(char *str);
t_dict	*parse_dict(char **lines, int *size);

// 06_dictionary.c
char	*ft_strtrim(char *str);

// 07_dictionary_lookup.c
char	*dict_get(t_dict *dict, int size, char *key);

// 08_convert_units.c
void	convert_units(char c, t_dict *dict, int size);

// 09_convert_tens.c
void	convert_tens(char *str, t_dict *dict, int size);

// 10_convert_hundreds.c
void	convert_hundreds(char *str, t_dict *dict, int size, int *first);
void	handle_tens(char *g, t_dict *dict, int size, int *first);

// 11_convert_large.c
int		convert_number(char *n, t_dict *dict, int size);

// 12_output.c
void	print_word(char *str);

// 13_utils.c
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);

// 14_free_memory.c
void	free_dict(t_dict *dict, int size);

#endif
