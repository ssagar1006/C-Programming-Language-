#include <stdio.h>
#include <math.h>

int main()
{
  int number, num, remainder, sum = 0, digits = 0;
  printf("Enter the number you want to check \n");
  scanf("%d", &number);
  num = number;
  // finding number of digits in the input number
  while (num != 0)
  {
    num = num / 10;
    digits++;
  }
  num = number;  
  // adding digits with exponent power of number of digits in the number
  for (int i = 0; i <= digits; i++)
  {
    remainder = num % 10; 
    sum = sum + pow(remainder, digits);
    num = num / 10;
  }
  
  // checking if sum is equal to number or not and printing the respective statements using if else 
  if (sum == number)
  {
    printf("%d is an Armstrong number.", number);
  }
  else
    printf("%d is not an Armstrong number.", number);

  return 0;
}