#include <stdio.h>

void merge(int data[], int left, int mid, int right) {
    int temp[100];

    int i = left;
    int j = mid + 1;
    int k = left;

    // Membandingkan elemen dari dua bagian
    while (i <= mid && j <= right) {
        if (data[i] <= data[j]) {
            temp[k++] = data[i++];
        } else {
            temp[k++] = data[j++];
        }
    }

    // Memasukkan sisa elemen bagian kiri
    while (i <= mid) {
        temp[k++] = data[i++];
    }

    // Memasukkan sisa elemen bagian kanan
    while (j <= right) {
        temp[k++] = data[j++];
    }

    // Menyalin kembali ke array data
    for (int x = left; x <= right; x++) {
        data[x] = temp[x];
    }
}

void mergeSort(int data[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, right);

        merge(data, left, mid, right);
    }
}

int main() {
    int score[] = {10, 20, 5, 15, 8, 5};
    int size = 6;

    printf("Sebelum sorting: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", score[i]);
    }

    mergeSort(score, 0, size - 1);

    printf("\nSetelah sorting: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", score[i]);
    }

    printf("\n");

    return 0;
}
