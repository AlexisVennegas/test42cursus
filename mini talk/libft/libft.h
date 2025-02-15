/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenegas <avenegas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:45:28 by avenegas          #+#    #+#             */
/*   Updated: 2024/03/13 02:16:33 by avenegas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define GREEN "\033[1;32m"

# define RED "\033[1;31m"

typedef struct s_stack
{
	int				num;
	int				id;
	int				check_sort;
	int				boolean_atoi;
	void			*content;
	struct s_stack	*next;
}					t_stack;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *dest, int c, size_t n);
void				ft_bzero(void *b, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memmove(void *str1, const void *str2, size_t n);
void				ft_putchar_fd(char c, int fd);
void				*ft_memchr(const void *b, int c, size_t n);
int					ft_memcmp(const void *b1, const void *b2, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dest, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				ft_putstr_fd(char *s, int fd);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				**ft_split(char const *s, char c);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *s, int fd);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
char				*ft_itoa(int n);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *str);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
size_t				ft_strlen(const char *s);
void				ft_lstadd_back(t_stack **lst, t_stack *new);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_stack **lst, t_stack *new);
int					ft_lstsize(t_stack *lst);
t_stack				*ft_lstlast(t_stack *lst);
void				ft_lstdelone(t_stack *lst, void (*del)(void *));
void				ft_lstclear(t_stack **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
#endif