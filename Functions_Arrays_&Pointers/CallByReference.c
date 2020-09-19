#include<stdio.h>
void swap(int *, int *);
int main(void) {

  int i = 3;
  int j = 4;
  printf("Before calling the swap function, integers are\n");
  printf("i = %d\n", i);
  printf("j = %d\n", j);
  printf("Calling the swap function\n");
  swap(&i, &j);
  printf("After calling the swap function, integers are\n");
  printf("i = %d\n", i);
  printf("j = %d\n", j);

  return 0;

}

void swap(int *i, int* j) {

 int temp;
 temp = *i;
 *i = *j;
 *j = temp;

}
