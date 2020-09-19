#include<stdio.h>
#include<stdlib.h>
int factorial(int);
int main(void) {
  int number, fact;
  printf("Process has started...\n");
  printf("To exit the process press any input other than integer\n");
repeat:
  printf("Compute factorial of a +ve integer: ");
  if(scanf("%d", &number)==1) {
      if(number>=0) {
         fact = factorial(number);
         printf("Factorial of %d is %d\n", number, fact);
         goto repeat;

         } else if(number<0) {
                printf("Please enter a +ve integer\n");
                goto repeat;
             }
  } else {
      printf("Process got exit because you pressed input other than integer value\n");
      fflush(stdin);
      exit(0);
    }
  return 0;
}

int factorial(int num) {
  if(num==0)
    return 1;
  else
    return num*factorial(num-1);

}
