#include <stdio.h>

// Función para intercambiar dos valores usando punteros
void intercambiar(int *x, int *y) {
    int temporal = *x;
    *x = *y;
    *y = temporal;
}

// Función para ordenar un array usando punteros
void ordenarArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Usamos aritmética de punteros para comparar e intercambiar
            if (*(arr + j) > *(arr + j + 1)) {
                intercambiar(arr + j, arr + j + 1);
            }
        }
    }
}

int main() {
    int array[] = {5, 3, 8, 4, 1};  // Array a ordenar
    int size = sizeof(array) / sizeof(array[0]);  // Tamaño del array

    // Imprimir el array original
    printf("Array original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));  // Usamos punteros para imprimir
    }
    printf("\n");

    // Ordenar el array
    ordenarArray(array, size);

    // Imprimir el array ordenado
    printf("Array ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));  // Usamos punteros para imprimir
    }
    printf("\n");

    return 0;
}
