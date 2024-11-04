/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:46:55 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:53:35 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

// MARK: - Includes

# include <stdlib.h>
# include <unistd.h>

// MARK: - Structures

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// MARK: - Prototypings

void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **alst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
size_t	ft_lstsize(t_list *lst);

char	*ft_itoa(int number);
size_t	ft_putchar_fd(char character, int filedescriptor);
size_t	ft_putendl_fd(const char *source, int filedescriptor);
size_t	ft_putnbr_fd(int number, int filedescriptor);
size_t	ft_putstr_fd(const char *source, int filedescriptor);
char	**ft_split(const char *source, char character);
void	ft_striteri(char *source, void (*func)(unsigned int, char *));
char	*ft_strjoin(const char *source1, const char *source2);
char	*ft_strmapi(const char *source, char (*func)(unsigned int, char));
char	*ft_strtrim(const char *source, const char *set);
char	*ft_substr(const char *source, unsigned int start, size_t length);

#endif // FT_H
