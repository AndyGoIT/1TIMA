#include <stdio.h>
#include <stdlib.h>

int main() {
  int jumlah;
  printf("masukkan jumlah Mahasiswa: ");
  scanf("%d", &jumlah);

  int *nilai = malloc(jumlah * sizeof(int));

  printf("Memori berhasil dibuat untuk %d Mahasiswa\n", jumlah);

  free(nilai);

  return 0;

}