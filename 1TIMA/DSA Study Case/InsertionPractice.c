#include <stdio.h>

int main(){
  int data[10]={70, 80, 90, 95};
  int n= 5;
  int position= 2;
  int newValue = 85;
  for(int i=n; i>position; i--){
    data[i]=data[i-1];
  }
  data[position]= newValue;
  n++;
  for(int i=0; i<n; i++){
    printf("%d", data[i]);
  }
  return 0;
}