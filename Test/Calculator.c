#include <stdio.h>

int main(void)
{
  double number1 = 3, number2 = 4, result;
  char Arithmetic = '*';

  result = Calculate(number1, Arithmetic, number2);
  print("Answer is %d", result)
  return 0;
}

double Calculate(double number1, char Arithmetic, double number2)
{
  double sum = 0;
  switch(Arithmetic)
  {
    case '*' :
      sum = number1 * number2;
      break;
    case '/' :
      sum = number1 / number2;
      break;
    case '+' :
      sum = number1 + number2;
      break;
    case '-' :
      sum = number1 - number2;
      break;
  }
}