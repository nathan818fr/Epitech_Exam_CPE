/*
** maff_alpha.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_maff_alpha
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 17:11:18 2014 Nathan Poirier
** Last update Wed Dec 10 17:13:07 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  char	c;

  c = 'a';
  while (c <= 'z')
    {
      my_putchar(c + ('A' - 'a') * ((c + 1) % 2));
      c = c + 1;
    }
  my_putchar('\n');
  return (0);
}
