# include <stdio.h>

int main() {
    int variable = 10;    // Declaración de una variable entera
    int *puntero;         // Declaración de un puntero a un entero
    puntero = &variable;  // El puntero almacena la dirección de 'variable'

    printf("Valor de la variable: %d\n", variable);
    printf("Dirección de la variable: %p\n", &variable);
    printf("Valor almacenado en puntero: %p\n", puntero);
    printf("Valor al que apunta el puntero: %d\n", *puntero);

    return 0;
}