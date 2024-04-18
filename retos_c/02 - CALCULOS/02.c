// ------------------------------------------------------------------------------------------------------------------------------------------------------
// ENUNCIADO:
// – Vamos a crear un programa que realice calculos matemáticos.
// – En 2 variables guardamos 2 números con los que realizamos los cálculos.
// – Realizamos una suma y mostramos el resultado.
// – Realizamos una resta y mostramos el resultado.
// – Realizamos una multiplicación y mostramos el resultado.
// – Realizamos una división y mostramos el resultado.
// ------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){

    float num1, num2;
    num1 = 10.7;
    num2 = 5;

    float suma = num1 + num2;
    printf("El resultado de la suma: %.2f\n", suma);

    float resta = num1 - num2;
    printf("El resultado de la resta: %.2f\n", resta);

    float multi = num1 * num2;
    printf("El resultado de la multiplicacion: %.2f\n", multi);

    float div = num1 / num2;
    printf("El resultado de la division: %.2f\n", div);

    return 0;
}