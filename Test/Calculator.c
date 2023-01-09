#include <stdio.h>

double calculate(double number1, char Arithmetic, double number2)
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
  return sum;  //return with sum and create Calculate system with switch case
}

int main(void)
{
  double number1 = 3, number2 = 4, result = 0;
  char Arithmetic = '*';

  result = number1 * number2; //calculate(number1, Arithmetic, number2);
  printf("Answer is %f", result);
  return 0;
}