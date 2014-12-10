/*
** count_island.c for count_island in /home/exam/rendu/ex_10
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Oct 25 12:54:22 2014 Exam User
** Last update Sat Oct 25 13:59:48 2014 Exam User
*/

#include <stdlib.h>
#include <fcntl.h>
#include <count_island.h>

int	count_island(char *filepath)
{
  int		fd;
  t_ilist	*island;

  fd = open(filepath, O_RDONLY);
  if (fd == -1)
    return (0);
  island = NULL;
  if (!island_read(fd, &island))
    {
      close(fd);
      return (0);
    }
  close(fd);
  island_parse(island);
  while (island != NULL)
    {
      my_putstr(island->line);
      my_putchar('\n');
      island = island->next;
    }
  return (1);
}

int	main(int argc, char **argv)
{
  if (argc > 1)
    {
      if (!count_island(argv[1]))
	my_putchar('\n');
    }
  else
      my_putchar('\n');
  return (0);
}
