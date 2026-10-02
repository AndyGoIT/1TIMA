#include <stdio.h>

int main(){
  int a, b, r;
  float hasil;

  while(1){
    printf("Input nilai a: ");
    scanf("%d", &a);

    printf("Input nilai b: ");
    scanf("%d", &b);

    printf("\n=== MENU ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Choose: ");
    scanf("%d", &r);

    switch(r){
      case 1:
      hasil = a+b;
      printf("Result: %d + %d = %.2f\n", a, b, hasil);
      break;

      case 2:
      hasil = a-b;
      printf("Result: %d - %d = %.2f\n", a, b, hasil);
      break;

      case 3:
      hasil = a*b;
      printf("Result: %d * %d = %.2f\n", a, b, hasil);
      break;

      case 4:
      if (b != 0){
        hasil = (float)a/b;
        printf("Result: %d * %d = %.2f\n", a, b, hasil);
      } else{
        printf("Error: Cannot divide by 0");
      } break;

      case 5:
      printf("Program Exited");
      return 0;

      default:
      printf("Invalid Choice!\n");
    }
    printf("\n");
  }

  return 0;

}