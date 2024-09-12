# include <stdio.h>

void intercambiar(int *x, int *y) {
    int temporal = *x;
    *x = *y;
    *y = temporal;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Antes del intercambio: a = %d, b = %d\n", a, b);
    intercambiar(&a, &b);  // Pasamos las direcciones de 'a' y 'b'
    printf("Después del intercambio: a = %d, b = %d\n", a, b);

    return 0;
}