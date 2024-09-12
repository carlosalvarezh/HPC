# include <stdio.h>

void incrementarArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) += 10;  // Incrementa cada elemento en 10
    }
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Array antes de la modificación: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    incrementarArray(array, size);  // Pasamos el array a la función

    printf("Array después de la modificación: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}