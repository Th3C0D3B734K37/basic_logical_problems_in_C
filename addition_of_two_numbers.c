//Addition of two numbers in C , in the same way addition for multiple numbers can be done 
//In this same way other arithematic operations such as subtraction , multiplication , division etc can be carried out 

#include<stdio.h>

int main()
{
  int a , b , sum;
  printf(" Enter two values of :-\n");
  scanf(" %d %d",&a,&b);
  printf("\n  a : %d \n  b : %d \n ",a,b);
  
  // Addition
  
  sum = a + b;
  
  printf("\n So the sum of 'a' and 'b' is:- %d \n",sum);
  return 0;
}

// In the same way you can create a calculator in C , so see the code for a simple calculator in C check my other repos
