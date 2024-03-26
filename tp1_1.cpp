/*
e) Declare un puntero en el procedimiento principal que apunte a una
variable de algún tipo y muestre por pantalla lo siguiente:
1) El contenido del puntero
2) La dirección de memoria almacenada por el puntero.
3) la dirección de memoria de la variable.
4) la dirección de memoria del puntero.
5) el tamaño de memoria utilizado por esa variable usando la
función sizeof()
f) Hacer el segundo commit del archivo y subirlo a la plataforma
g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el
punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo
readme.md
*/

#include <stdio.h>

int main(void) {
    printf("Hola mundo");
    int *puntero, num = 4;
    puntero = &num;
    printf("\nEl puntero es: %d", *puntero);
    printf("\nLa direccion de memoria almacenada del puntero es: %p", puntero);
    printf("\nLa direccion de memoria de la variable es: %p", &num);
    printf("\nLa direccion de memoria del puntero es: %p", &puntero);
    printf("\nEl tamanio de memoria utilizado por la variable es: %d bytes", sizeof(num));
    return 0;
}