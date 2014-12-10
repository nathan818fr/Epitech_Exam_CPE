/*
** hidenp.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/3_hidenp
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 19:30:12 2014 Nathan Poirier
** Last update Wed Dec 10 19:31:42 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	find(char *hiden, char *str)
{
  int	f;
  int	i;
  int	e;

  f = 0;
  while (hiden[f])
    {
      i = 0;
      e = 0;
      while (str[i] && e == 0)
	{
	  if (str[i] == hiden[f])
	    e = 1;
	  i++;
	}
      if (e == 0)
	return (0);
      f++;
    }
  return (1);
}

int	main(int argc, char **argv)
{
  if (argc == 3)
    {
      if (find(argv[1], argv[2]))
	my_putchar('1');
      else
	my_putchar('0');
    }
  my_putchar('\n');
  return (0);
}
