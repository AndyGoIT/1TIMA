#include <stdio.h>

int main(){
  //nested loop
  int nilai[3][4]={
    {80 , 75 , 90 , 85,},
    {90 , 70 , 76 , 92,},
    {42 , 89 , 85 , 82}
  };
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      printf("%d", nilai[i][j]);
    }
    printf("\n");
  }
//student average
  for(int i=0; i<3; i++){
    int total=0;
    for(int j=0; j<4; j++){
      total += nilai[i][j];
    }
    float avg = total / 4.0f;
    printf("Average student %d= %.2f\n",i+1,avg);
  }
  //maximum score
  int max = nilai[0][0];
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      if(nilai[i][j] > max){
        max = nilai[i][j];
      }
    }
  }

  printf("Maximum score = %d\n", max);
  return 0;
}