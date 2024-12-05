// Задача 3. Найти максимум из вешественных чисел a и b
double max_of_two_numbers(double a, double b)
{
  double rez = 0;
  if (a == b) rez = a;
  else {
    if (a > b) rez = a;
    else rez = b;
  }
  return rez;
}
