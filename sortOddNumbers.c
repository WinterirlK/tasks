#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort_array(size_t n, int arr[n]) {
    int *elo = malloc(n * sizeof(int));
    int *liczby = malloc(n * sizeof(int));

    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            elo[counter] = i;
            liczby[counter] = arr[i];
            counter++;
        }
    }

    int dlg = counter;
    bubbleSort(liczby, dlg);

    for (int k = 0; k < dlg; k++) {
        arr[elo[k]] = liczby[k];
    }
}
