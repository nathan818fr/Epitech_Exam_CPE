/*
** main.c for alph in /home/exam/rendu/ex_5
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 10:56:49 2014 Exam User
** Last update Sat Nov  8 11:37:46 2014 Exam User
*/

#include <stdlib.h>
#include "my_list.h"
#include "utils.h"

int	is_sep(char c)
{
  return (c == ' ' || c == '\t' || c == '\0');
}

void	ord_alphlong(t_list *list, char *str)
{
  int	i;
  int	cpos;
  int	ppos;

  cpos = -1;
  i = 0;
  while (i <= 0 || str[i - 1])
    {
      if (is_sep(str[i]))
	{
	  if (cpos >= 0 && i > cpos)
	    {
	      list->data = malloc(i - cpos + 1);
	      my_str_cpy((char *)list->data, str, cpos, i);
	      list = new_list(list);
	    }
	  cpos = - 1;
	}
      else if (cpos == -1)
	cpos = i;
      i = i + 1;
    }
}

void		ord_lenlist(t_list *list, t_list *flenlist)
{
  t_list	*lenlist;
  int		len;

  lenlist = flenlist;
  while (list != NULL)
    {
      if (list->data != NULL)
	{
	  len = my_strlen(list->data);
	  if (!int_is_in_list(len, flenlist))
	    {
	      lenlist->data = malloc(sizeof(int));
	      *(int *)(lenlist->data) = len;
	      lenlist = new_list(lenlist);
	    }
	}
      list = list->next;
    }
  sort_list(flenlist, &my_int_cmp);
}

void	print_alphlong(t_list *list, int len)
{
  char	sp;

  sp = 0;
  while (list != NULL)
    {
      if (list->data != NULL && my_strlen((char *)list->data) == len)
	{
	  if (sp)
	    my_putchar(' ');
	  my_putstr((char *)list->data);
	  sp = 1;
	}
      list = list->next;
    }
  my_putchar('\n');
}

int		main(int argc, char **argv)
{
  t_list	*first;
  t_list	*len;

  if (argc > 1)
    {
      first = new_list(NULL);
      ord_alphlong(first, argv[1]);
      sort_list(first, &my_alphstr_cmp);
      len = new_list(NULL);
      ord_lenlist(first, len);
      while (len != NULL)
	{
	  if (len->data != NULL)
	    print_alphlong(first, *(int *)(len->data));
	  len = len->next;
	}
    }
  else
    my_putchar('\n');
  return (0);
}
