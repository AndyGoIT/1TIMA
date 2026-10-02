#include <stdio.h>

int main(){
  int nilai[5] = {80, 45, 90, 65, 75};
  int total = 0;

  for (int i = 0; i<5; i++){
    total += nilai[i];
  }

  float average = total /5.0;
  printf("Total : %d\n", total);
  printf("Average : %.2f\n", average);

  int max = nilai[0];
  int min = nilai[0];
  for(int i = 1; i < 5; i++){
    if (nilai[i]>max){
      max=nilai[i];
    }
  
  if (nilai[i]<min){
    min=nilai[i];
  }
  }

  printf("Max = %d\n", max);
  printf("Min = %d\n", min);

  int passed = 0;
  int failed = 0;
  for (int i=0;  i<5; i++){
    if (nilai[i] >= 60){
      passed++;
    }else{
      failed++;
    }
  }

  printf("Passed: %d\n", passed);
  printf("Failed: %d\n", failed);
  
  return 0;
}