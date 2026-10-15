#include <stdio.h>

void insertionSort(int data[], int size) {
    for (int i = 1; i < size; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = key;
    }
     printf("Data setelah sorting: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }

    printf("\n");
}


int main() {
    int score[] = {10, 20, 5, 15, 8, 5};
    insertionSort(score, 6);
    return 0;
}
