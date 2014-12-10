/*
** rev_str.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_rev_str
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 18:17:57 2014 Nathan Poirier
** Last update Wed Dec 10 18:18:44 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	rev_str(char *str)
{
  int   l;

  l = 0;
  while (str[l])
    l = l + 1;
  while (l > 0)
    {
      l = l - 1;
      my_putchar(str[l]);
    }
}

int     main(int argc, char **argv)
{
  if (argc > 1)
    rev_str(argv[1]);
  my_putchar('\n');
  return (0);
}
