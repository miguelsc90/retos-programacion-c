// ------------------------------------------------------------------------------------------------------------------------------------------------------
// ENUNCIADO:
// – Aprovechamos el código del ejercicio 02.
// – Para esta mejora, pediremos al usuario por terminal que nos indique los 2 números con los que realizamos los cálculos.
// – Realiza una suma, una resta, una multiplicación y una división.
// – Muestra los resultados de todos los cálculos.
// ------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){

    float num1, num2;
    
    printf("Dime el primer numero: ");
    scanf("%f", &num1);
    printf("Dime el segundo numero: ");
    scanf("%f", &num2);
    printf("------------------------\n");

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