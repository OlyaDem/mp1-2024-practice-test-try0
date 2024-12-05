// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limts.h>
int sum_of_two_numbers(int a, int b)
{
  int rez = 0:
  if ((INT MIN < (a + b)) && ((a + b) < INT_MAX)) rez = a + b;
  else {
    if ((a + b) <= INT_MIN) rez = INT_MIN;
    if ((a + b) >= INT_MAX) rez = INT_MAX;
  }
  return rez;
}
