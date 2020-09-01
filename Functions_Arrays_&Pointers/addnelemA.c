#include<stdio.h>

int main(void) {
  int array[5];
  int sum = 0;
  int size = sizeof(array)/sizeof(int);
  printf("size of array = %d\n", size);
  printf("Assign integer elements to array\n");

  for(int i = 0; i<size; i++) {
    printf("array[%d] = ",i);
    scanf("%d",array+i);
  }

  for(int j = 0; j< size; j++) {
    sum += array[j];
  }

  printf("Sum of array integer elemnts = %d\n", sum);

  return 0;
}
