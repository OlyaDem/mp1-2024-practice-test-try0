// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
int sum_of_two_numbers(int a, int b)
{
  rez = 0;
  if ((INT_MIN < (a + b)) && ((a + b) < INT_MAX)) rez = 0;
  else {
    if ((a + b) <= INT_MIN) rez = INT_MIN;
    if ((a + b) >= INT_MAX) rez = INT_MAX;
  }
  return rez;
}
