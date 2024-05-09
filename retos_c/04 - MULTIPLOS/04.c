// ------------------------------------------------------------------------------------------------------------------------------------------------------
// ENUNCIADO:
// – Pedimos al usuario un número, como vimos en el ejercicios anterior usamos la función “scanf”.
// – Con el número indicado debemos comprobar si es múltiplo de 2 o de 3.
// – Si el número es múltiplo de 2, indicamos “El número es múltiplo de 2”.
// – Si el número es múltiplo de 3, indicamos “El número es múltiplo de 3”.
// – En caso de no ser múltiplo ni de 2 ni de 3, indicamos “El número no es múltiplo de 2 ni de 3”.
// ------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
    int numero;

    printf("Indicame un numero: ");
    scanf("%i", &numero);

    if (numero % 2 == 0){
        printf("El numero es multiplo de 2.");
    }
    else if (numero % 3 == 0){
        printf("El numero es multiplo de 3.");
    }
    else {
        printf("El numero no es multiplo de 2 ni de 3.");
    }

    return 0;
}