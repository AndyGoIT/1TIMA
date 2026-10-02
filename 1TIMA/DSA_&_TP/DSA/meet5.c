#include <stdio.h>
#include <stdlib.h>
int main(){
  int *frequency;
  int n;
  int category;

  // Alokasi Memori
  frequency=calloc(10, sizeof(int));
  if (frequency==NULL){
    printf("Memory allocation failed!\n");
    return 1;
  }
  // Input
  printf("Enter the number of data points: ");
  scanf("%d", &n);

  //Input Category
  for (int i=0; i<n; i++){
    printf("Enter category for data point %d (0-9): ", i+1);
    scanf("%d", &category);
    // Validasi Category
    if (category >= 0 && category <= 9){
      frequency[category]++;
    } else {
      printf("Invalid category! Please enter a value between 0 and 9.\n");
      i--; // Repeat this iteration for invalid input
    }
  }

  // Output
  printf("\nFrequency Penjualan\n");
  for (int i=0; i<10; i++){
    printf("Category %d: %d\n", i, frequency[i]);
  }

  free(frequency);
  return 0;
}