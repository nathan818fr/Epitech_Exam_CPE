/*
** utils.h for utils in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 09:49:55 2014 Exam User
** Last update Sat Nov  8 11:12:16 2014 Exam User
*/

#ifndef MY_LIST_H_
# define MY_LIST_H_

typedef struct	s_list
{
  void		*data;
  struct s_list	*next;
}		t_list;

t_list	*new_list(t_list *prev);
void	sort_list(t_list *first, int (*cmp)(void *, void *));

#endif /* !MY_LIST_H_ */
