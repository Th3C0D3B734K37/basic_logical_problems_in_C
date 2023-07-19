// This is a code to know if the number is even or odd and print that accordingly.

#include<stdio.h>
int main()
{
  int a;
  printf("Enter a number:-> ");
  scanf("%d",&a);

  if (a%2 == 0)
  {
    printf("Numer is Even");
  }
  else 
  {
    printf("Number is Odd");
  }
  return 0;
}

