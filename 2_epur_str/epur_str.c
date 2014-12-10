/*
** epur_str.c for epur_str in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/2_epur_str
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 19:17:41 2014 Nathan Poirier
** Last update Wed Dec 10 19:25:24 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	epur_str(char *str)
{
  char	sp;
  int	i;

  sp = -1;
  i = 0;
  while (str[i])
    {
      if (str[i] != ' ' && str[i] != '\t')
	{
	  if (sp == 1)
	    my_putchar(' ');
	  sp = 0;
	  my_putchar(str[i]);
	}
      else if (sp == 0)
	sp = 1;
      i++;
    }
}

int	main(int argc, char **argv)
{
  if (argc > 1)
    epur_str(argv[1]);
  my_putchar('\n');
  return (0);
}
