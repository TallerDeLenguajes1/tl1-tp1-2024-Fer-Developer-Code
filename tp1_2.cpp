/*
a) Haga una función que devuelva el cuadrado de un numero
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de
la variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre
ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la
variable b, y en el valor de b el valor de a
e) Dado dos parámetros de entrada, deberá devolverlos de forma
ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(a,b) //deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande
f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
por pantalla.
g) Al finalizar, debe subir todos los cambios al repositorio, usando los
siguientes comandos.
i. git add .
ii. git commit -m “ejercicio 2.4 completado”
iii. git push*/

#include <stdio.h>
#include <stdlib.h>

int cuadrado(int a);
void cuadradoVoid(int *a, int *resultado);

void invertir(int *a, int *b);

void orden(int *a, int *b);

int main(void) {
    int a, b, resultado, num1, num2;
    printf("Ingrese un numero a: \n");
    scanf("%d", &a);
    printf("Ingrese un numero b: \n");
    scanf("%d", &b);

    printf("El valor de a es: %d y el de b: %d\n",a, b);

    resultado = cuadrado(a);

    printf("El cuadrado de %d es: %d\n", a, resultado);

    cuadradoVoid(&b, &resultado);

    printf("El cuadrado de %d es: %d\n", b, resultado);
    
    invertir(&a, &b);
    printf("El valor de 'a' ahora es: %d y el de 'b': %d\n",a, b);
    
    printf("Ingrese un numero para comparar tamanio:\n");
    scanf("%d", &num1);
    printf("Ingrese otro numero para comparar tamanio:\n");
    scanf("%d", &num2);
    orden(&num1, &num2);
    printf("El numero menor es %d\n y el que le sigue %d\n", num1, num2);

    return 0;
}

int cuadrado(int a) {
    return a * a;
}

void cuadradoVoid(int *a, int *resultado) {
    *resultado = *a * *a;
    printf("La direccion de la variable es %p y el contenido %d\n", a, *a);
    free(a);
    free(resultado);
}

void invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b; //Estuve modificando las direcciones de memoria y por eso no me daban los valores, de esta forma se soluciona para que si o si tome valores y no direcciones que hacen quedar como que nunca se invirtio
    *b = aux;
}

void orden(int *a, int *b){
    if (*a > *b) {
        invertir(a, b);
    }
}