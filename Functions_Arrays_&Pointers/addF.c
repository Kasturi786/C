#include<stdio.h>
int addition(int, int);

int main(void) {
  int a, b, c;

  printf("Enter the value of a : ");
  scanf("%d", &a);
  printf("\n");
  printf("Enter the value of b : ");
  scanf("%d", &b);

  c = addition(a, b);
  printf("addition of two numbers %d and %d = %d\n", a, b, c);

  return 0;
}

int addition(int a, int b) {
  int c = a+b;
  return c;
}
