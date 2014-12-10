/*
** rotone.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_rotone
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:11:56 2014 Nathan Poirier
** Last update Wed Dec 10 15:13:12 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	rotone(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	my_putchar('a' + ((str[i] - 'a' + 1) % 26));
      else if (str[i] >= 'A' && str[i] <= 'Z')
	my_putchar('A' + ((str[i] - 'A' + 1) % 26));
      else
	my_putchar(str[i]);
      i++;
    }
}

int	main(int argc, char **argv)
{
  if (argc > 1)
    rotone(argv[1]);
  my_putchar('\n');
  return (0);
}
