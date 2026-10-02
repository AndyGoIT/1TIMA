#include <stdio.h>
int main() {
  int umur;
  int harga = 50000;

  printf("=== Program Tiket Masuk ===\n");
  printf("Masukkan umur Anda: ");
  scanf("%d", &umur);

  if (umur <= 5) {
    printf("Tiket Gratis! \n");
  } else if (umur >= 60 ) {
    printf("Diskon 50%% \n");
    printf("Harga Setelah Diskon: %d ", harga / 2);
  } else {
    printf("Harga Normal \n");
    printf("Harga Tiket: %d ", harga);
  }

  return 0;
}