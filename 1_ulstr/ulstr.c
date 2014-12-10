/*
** 1_ulstr.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_ulstr
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:50:25 2014 Nathan Poirier
** Last update Wed Dec 10 15:50:52 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	ulstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	my_putchar(str[i] - ('a' - 'A'));
      else if (str[i] >= 'A' && str[i] <= 'Z')
	my_putchar(str[i] - ('A' - 'a'));
      else
	my_putchar(str[i]);
      i++;
    }
}

int	main(int argc, char **argv)
{
  if (argc > 1)
    ulstr(argv[1]);
  my_putchar('\n');
  return (0);
}
