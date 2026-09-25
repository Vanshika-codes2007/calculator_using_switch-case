#include <stdio.h>
int main()
{
  char operation;
  float n1,n2;
  printf("enter an operator(+,-,*,/):");
  scanf("%c",&operation);
  printf("enter two operands:");
  scanf("%f %f",&n1,&n2);
  switch(operation)
  {
    case'+':
    printf("%f",n1+n2);
    break;
    case'-':
    printf("%f",n1-n2);
    break;
    case'*':
    printf("%f",n1*n2);
    break;
    case'/':
    printf("%f",n1/n2);
    break;
    default:
    printf("error");
  }
}