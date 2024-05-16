// ------------------------------------------------------------------------------------------------------------------------------------------------------
// ENUNCIADO:
// – Solicita al usuario un número entero positivo.
// - Utiliza bucles y condicionales para determinar si cada número menor o igual al número ingresado por el usuario es primo.
// – Si un número es primo, imprímelo.
// – Si el número ingresado por el usuario es menor o igual a 1, imprime un mensaje indicando que no hay números primos en ese rango.
// ------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num){
    if(num <= 1){
        return false;
    }
    if (num == 2){
        return true;
    }
    if (num % 2 == 0){
        return false;
    }
    int i = 3;
    while (i * i <= num){
        if (num % i == 0){
            return false;
        }
        i = i + 2;
    }

    return true;
}

int main(){
    int numero;
    printf("Dime un numero entero positivo: ");
    scanf("%i", &numero);

    if(numero <= 1){
        printf("No hay numeros primos en este rango\n");
    } else {
        int n = 2;
        while (n <= numero){
            if(esPrimo(n)){
                printf("%i\n", n);
            }
            n = n + 1;
        }
    }

    return 0;
}