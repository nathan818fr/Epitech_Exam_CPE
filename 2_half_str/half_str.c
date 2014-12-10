/*
** half_str.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_half_str
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:25:31 2014 Nathan Poirier
** Last update Wed Dec 10 15:26:06 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	half_str(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (i % 2 == 0)
	my_putchar(str[i]);
      i++;
    }
  my_putchar('\n');
}

int	main(int argc, char **argv)
{
  int	i;

  i = 1;
  while (i < argc)
    {
      half_str(argv[i]);
      i++;
    }
  if (argc <= 1)
    my_putchar('\n');
  return (0);
}
