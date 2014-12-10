/*
** island_read.c for count_island in /home/exam/rendu/ex_10
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Oct 25 13:05:17 2014 Exam User
** Last update Sat Oct 25 14:32:07 2014 Exam User
*/

#include <stdlib.h>
#include <fcntl.h>
#include <count_island.h>

void	island_read_to_buffer(char *buffer, char *tmpbuf, int size)
{
  int	l;
  int	i;

  l = 0;
  while (buffer[l])
    {
      l = l + 1;
    }
  i = 0;
  while (i < size)
    {
      buffer[l + i] = tmpbuf[i];
      i = i + 1;
    }
  buffer[l + i] = 0;
}

void	island_buffer_to_list_put(char *buffer, int s, int e, t_ilist **list)
{
  int		i;
  t_ilist	*nl;
  char		*str;

  i = 0;
  nl = malloc(sizeof(t_ilist));
  str = malloc(e - s);
  while (s + i < e)
    {
      str[i] = buffer[s + i];
      i = i + 1;
    }
  nl->len = malloc(sizeof(int));
  *(nl->len) = i;
  nl->line = str;
  nl->prev = *list;
  nl->next = NULL;
  if (*list != NULL)
    (*list)->next = nl;
  *list = nl;
}

void	island_buffer_to_list(char *buffer, t_ilist **list)
{
  int	i;
  int	pos;

  i = 0;
  pos = 0;
  while(buffer[i])
    {
      if (buffer[i] == '\n')
	{
	  island_buffer_to_list_put(buffer, pos, i, list);
	  pos = i + 1;
	}
      i = i + 1;
    }
  i = 0;
  while (i < pos)
    {
      buffer[i] = buffer[pos + i];
      i = i + 1;
    }
  buffer[i] = 0;
}

int	island_is_valid(char *buf, int size)
{
  int	i;

  i = 0;
  while(i < size)
    {
      if (buf[i] != '.' && buf[i] != 'X' && buf[i] != '\n')
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}

int	island_read(int fd, t_ilist **list)
{
  int	bufsize;
  int	i;
  int	size;
  char	*buffer;
  char	*tmpbuf;

  bufsize = 2048;
  tmpbuf = malloc(bufsize);
  buffer = malloc(bufsize * 2 + 1);
  buffer[0] = 0;
  buffer[bufsize * 2] = 0;
  while ((size = read(fd, tmpbuf, bufsize)) != 0)
    {
      if (size == -1)
	return (0);
      if (!island_is_valid(tmpbuf, size))
	return (0);
      island_read_to_buffer(buffer, tmpbuf, size);
      island_buffer_to_list(buffer, list);
    }
  while (*list != NULL && (*list)->prev != NULL)
    *list = (*list)->prev;
  return (1);
}
