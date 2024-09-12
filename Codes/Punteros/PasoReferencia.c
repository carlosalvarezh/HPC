# include <stdio.h>

void pasoPorValor(int x) {
    x = 20;  // Solo modifica la copia local
}

void pasoPorReferencia(int *p) {
    *p = 20;  // Modifica el valor original
}

int main() {
    int a = 10;
    int b = 10;

    pasoPorValor(a);
    pasoPorReferencia(&b);

    printf("Valor de 'a' después de paso por valor: %d\n", a);  // No cambia
    printf("Valor de 'b' después de paso por referencia: %d\n", b);  // Cambia

    return 0;
}