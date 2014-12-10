/*
** my_list.c for list in /home/exam/rendu/ex_5
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 10:57:13 2014 Exam User
** Last update Sat Nov  8 11:25:16 2014 Exam User
*/

#include <stdlib.h>
#include "my_list.h"

int	int_is_in_list(int n, t_list *list)
{
  while (list != NULL)
    {
      if (list->data != NULL && *(int *)(list->data) == n)
	return (1);
      list = list->next;
    }
  return (0);
}

t_list		*new_list(t_list *prev)
{
  t_list	*list;

  list = malloc(sizeof(t_list));
  list->data = NULL;
  list->next = NULL;
  if (prev != NULL)
    prev->next = list;
  return (list);
}

int	sort_list_elem(t_list *l1, t_list *l2, int (*cmp)(void *, void *))
{
  void	*swap;

  if ((*cmp)(l1->data, l2->data) > 0)
    {
      swap = l1->data;
      l1->data = l2->data;
      l2->data = swap;
      return (1);
    }
  return (0);
}

void		sort_list(t_list *first, int (*cmp)(void *, void *))
{
  t_list	*list;
  int		e;

  e = 1;
  while (e > 0)
    {
      e = 0;
      list = first;
      while (list != NULL && list->next != NULL)
	{
	  e = e + sort_list_elem(list, list->next, cmp);
	  list = list->next;
	}
    }
}
