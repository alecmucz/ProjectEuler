#include <stdio.h>

int main()
{
  int num;
  int size;

  long maxProduct = 0;

  int i, j;

  printf("Enter the number of Adjacent Digits you want to check the Largest Product by: ");
  scanf("%d", &num);

  printf("Enter the size of the digits you will search: ");
  scanf("%d", &size);
  int arr[size];


  printf("Enter the Digits you want to search through:\n");
  for (i = 0; i < size; i++){
    scanf("%1d", &arr[i]);
  }

  for (i = 0; i <= size - num; i++) {
      long product = 1;
      for (j = 0; j < num; j++){
        product *= arr[i + j];
        }
      if (product > maxProduct) maxProduct = product;
      }
  
  
  printf("%ld\n", maxProduct);
  
  return 0;
}
