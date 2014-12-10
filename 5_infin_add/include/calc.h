/*
** calc.h for calc in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 09:52:53 2014 Exam User
** Last update Sat Nov  8 10:30:18 2014 Exam User
*/

#ifndef CALC_H_
# define CALC_H_

typedef struct	s_strnb
{
  char		*str;
  int		strlen;
  char		is_neg;
}		t_strnb;

t_strnb *strnb_create(int len);
void    strnb_check(t_strnb *nb);
t_strnb	*calc_add(t_strnb *nb1, t_strnb *nb2);
t_strnb *calc_sub(t_strnb *nb1, t_strnb *nb2);

#endif /* !CALC_H_ */
