#include <stdio.h>
#include <stdlib.h>
#include "pila.h";
//Prototipado
void cargarPila(); //1
void pasajeDePila(Pila *pila2); //2
void pasajeDePila3(Pila *pila3); //3
int encontrarMenorPila(Pila *pila4); //4
void ordenamientoxSeleccion(Pila *pila5); //5
void ordenamientoxInsercion(Pila *pila6, Pila *dato); //6
void pasajeDeOrdenadaxInsercion(Pila *pila7, Pila *dato2); //7
int devolver1(Pila *pila8); //8
int devolver2(Pila *pila8); //8
int suma2ElementosPila(int a, int b); //8
int contadorElementos(Pila *pila9); //9
int sumaElementos(Pila *pila9); //9
float promedioElementos(int contador, int acumulador); //9
void mostrarElementosPila(Pila *pila10); //10
void cargaPila(int cantidad); //Extra1

//_____________________________________________________________________________________________________________________________________________________________________________________________________________________//
int main() {
//Menú de opciones.
//Crear un switch (va a contener todos los ejercicios) dentro de un do while

char eleccion;
int ejercicios;
int i, valores;

do {
    printf("1)Hacer una funcion que permita ingresar varios elementos a una pila, tanto como quiera el usuario \n");
    printf("\n");
    printf("2)Hacer una funcion que pase todos los elementos de una pila a otra \n");
    printf("\n");
    printf("3)Hacer una funcion que pase todos los elementos de una pila a otra, pero conservando el orden \n");
    printf("\n");
    printf("4)Hacer una funcion que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila \n");
    printf("\n");
    printf("5)Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la funcion del ejercicio 4. (Ordenamiento por seleccion) \n");
    printf("\n");
    printf("6)Hacer una funcion que inserta en una pila ordenada un nuevo elemento, conservando el orden de ésta \n");
    printf("\n");
    printf("7)Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la funcion del ejercicio 6. (Ordenamiento por insercion) \n");
    printf("\n");
    printf("8) Hacer una funcion que sume y retorne los dos primeros elementos de una pila (tope y anterior),sin alterar su contenido \n");
    printf("\n");
    printf("9) Hacer una funcion que calcule el promedio de los elementos de una pila, para ello hacer tambien una funcion que calcule la suma, otra para la cuenta y otra que divida. En total son cuatro funciones, y la funcion que calcula el promedio invoca a las otras 3 \n");
    printf("\n");
    printf("10)Hacer una funcion que reciba una pila con numeros de un solo digito (es responsabilidad de quien usa el programa) y que transforme esos digitos en un numero decimal. \n");
    printf("\n");
    printf("Extra 11: Realizar una funcion que cargue la pila sin utilizar la funcion leer \n");
    printf("\n");
    printf("Extra 12: Realizar una funcion que muestre la pila sin utilizar la funcion mostrar \n");
    printf("\n");
    printf("INDIQUE EL NUMERO DE EJERCICIO: ");
    scanf("%i", &ejercicios);
    printf("\n");

    switch(ejercicios) {
    case 1:
        printf("Usted se encuentra en el ejercicio 1 \n");
        printf("\n");
        cargarPila();
    break;

    case 2:; //El punto y coma lo utilizamos cuando dentro del Case vamos a inicializar variables
        printf("Usted se encuentra en el ejercicio 2 \n");
        printf("\n");

        srand(time(NULL));
        Pila pila2;
        inicpila(&pila2);

        printf("Cuantos valores quiere que tenga la Pila?  ");
        scanf("%i", &valores);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");
        for(i = 1; i <= valores; i++) {
            apilar(&pila2, rand()%100+1);
        }
        printf("Mostrando Pila cargada: \n");
        mostrar(&pila2);

        printf("Pasando los elementos a otra pila... \n");

        pasajeDePila(&pila2);
    break;

    case 3:

        printf("Usted se encuentra en el ejercicio 3 \n");
        printf("\n");

        srand(time(NULL));
        Pila pila3;
        inicpila(&pila3);

        printf("Cuantos valores quiere que tenga la Pila?  ");
        scanf("%i", &valores);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");
        for(i = 1; i <= valores; i++) {
            apilar(&pila3, rand()%100+1);
        }
        printf("Mostrando Pila cargada: \n");
        mostrar(&pila3);

        printf("Pasando los elementos a otra pila... \n");

        pasajeDePila3(&pila3);

    break;

    case 4:

        printf("Usted se encuentra en el ejercicio 4 \n");
        printf("\n");

        srand(time(NULL));
        Pila pila4;
        inicpila(&pila4);
        int menorEncontado;

        printf("Cuantos valores quiere que tenga la Pila? ");
        scanf("%i", &valores);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");
        for(i = 1; i <= valores; i++) {
            apilar(&pila4, rand()%100+1);
        }

        printf("Mostrando Pila cargada: \n");
        mostrar(&pila4);
        printf("\n");

        menorEncontado = encontrarMenorPila(&pila4);
        printf("El elemento menor es: %i", menorEncontado);
        printf("\n");
    break;

    case 5:;

        printf("Usted se encuentra en el ejercicio 5 \n");
        printf("\n");

        srand(time(NULL));
        Pila pila5;
        inicpila(&pila5);

        printf("Cuantos valores quiere que tenga la Pila? ");
        scanf("%i", &valores);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");
        for(i = 1; i <= valores; i++) {
            apilar(&pila5, rand()%100+1);
        }

        printf("Mostrando Pila cargada: \n");
        mostrar(&pila5);
        printf("\n");

        printf("Ordenando pila de menor a mayor... \n");

        printf("Pila ordenada por seleccion \n");

        ordenamientoxSeleccion(&pila5);

    break;

    case 6:

        printf("Usted se encuentra en el ejercicio 6 \n");
        printf("\n");

        srand(time(NULL));
        Pila pila6, pilaDato;
        inicpila(&pila6);
        inicpila(&pilaDato);

        printf("Cuantos valores quiere que tenga la Pila? ");
        scanf("%i", &valores);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");
        for(i = 1; i <= valores; i++) {
            apilar(&pila6, rand()%100+1);
        }

        printf("Mostrando Pila cargada: \n");
        mostrar(&pila6);
        printf("\n");

        printf("Ingrese el dato que desea insertar dentro de la pila \n");
        printf("\n");
        leer(&pilaDato);
        printf("\n");


        ordenamientoxInsercion(&pila6, &pilaDato);


    break;

    case 7:

        printf("Usted se encuentra en el ejercicio 7 \n");
        printf("\n");

        srand(time(NULL));
        Pila pila7, pilaDato2;
        inicpila(&pila7);
        inicpila(&pilaDato2);

        printf("Cuantos valores quiere que tenga la Pila? ");
        scanf("%i", &valores);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");
        for(i = 1; i <= valores; i++) {
            apilar(&pila7, rand()%100+1);
        }

        printf("Mostrando Pila cargada: \n");
        mostrar(&pila7);
        printf("\n");

        printf("Ingrese el dato que desea insertar dentro de la pila \n");
        printf("\n");
        leer(&pilaDato2);
        printf("\n");


        pasajeDeOrdenadaxInsercion(&pila7, &pilaDato2);

    break;

    case 8:

        printf("Usted se encuentra en el ejercicio 8 \n");
        printf("\n");

        srand(time(NULL));
        Pila pila8;
        inicpila(&pila8);

        int num1, num2, resultado;

        printf("Cuantos valores quiere que tenga la Pila? ");
        scanf("%i", &valores);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");
        for(i = 1; i <= valores; i++) {
            apilar(&pila8, rand()%100+1);
        }

        printf("Pila Cargada... \n");
        mostrar(&pila8);

        num1 = devolver1(&pila8);
        printf("El tope de la Pila es: %i \n", num1);
        printf("\n");
        num2 = devolver2(&pila8);
        printf("El anterior del tope de la Pila es: %i \n", num2);
        printf("\n");

        resultado = suma2ElementosPila(num1, num2);
        printf("La suma %i + %i = %i  \n", num1, num2, resultado);


    break;

    case 9:

        printf("Usted se encuentra en el ejercicio 9 \n");
        printf("\n");

        srand(time(NULL));
        int contador, acumulador, cantidad;
        float promedio;

        cantidad = rand()%20+1;

        Pila pila9;
        inicpila(&pila9);

        printf("Cargando Pila... \n");
        printf("\n");


        for(i = 1; i <= cantidad; i++) {
            apilar(&pila9, rand()%100+1);
        }

        printf("Pila Cargada... \n");
        mostrar(&pila9);

        contador = contadorElementos(&pila9);
        printf("La Pila tiene %i elementos \n", contador);
        printf("\n");

        acumulador = sumaElementos(&pila9);
        printf("La suma de los elementos es: %i \n", acumulador);
        printf("\n");

        promedio = promedioElementos(contador, acumulador);
        printf("El promedio de los elementos es: %.2f", promedio);
        printf("\n");


    break;

    case 10:

        printf("Usted se encuentra en el ejercicio 10 \n");
        printf("\n");

        Pila pila10;
        inicpila(&pila10);


        printf("Del 0 al 9, Indicar cuantos valores quiere que tenga la Pila? ");
        scanf("%i", &valores);
        printf("\n");

        if(valores <= 9) {
            printf("El valor ingresado es correcto \n");
        }
        else {
            printf("El valor ingresado es Incorrecto, vuelva a intentarlo \n");
            printf("\n");
            printf("Del 0 al 9, Indicar cuantos valores quiere que tenga la Pila? ");
            scanf("%i", &valores);
            printf("\n");
        }

        for(i = 1; i <= valores; i++) {
            apilar(&pila10, rand()%8+1);
        }

        printf("Cargando Pila... \n");
        printf("\n");
        printf("Pila cargada: \n");
        mostrar(&pila10);

        mostrarElementosPila(&pila10);

    break;

    case 11:;

        int elements;

        printf("Usted se encuentra en el ejercicio Extra 1 \n");
        printf("\n");

        printf("Indicar cuantos valores quiere que tenga la Pila? ");
        scanf("%i", &elements);
        printf("\n");

        printf("Cargando Pila... \n");
        printf("\n");

        cargaPila(elements);

    break;

    case 12:

    break;

    default:
        printf("Numero ingresado No valido \n");
    break;
    }
    printf("\n");
    printf("Pulse s si desea continuar:  ");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");

} while(eleccion == 's');
}

//Ejercicio 1: Función cargar una pila con los datos x que quiera el usuario
void cargarPila() {
Pila p;
inicpila(&p);
int i, datos;

printf("Ingrese cuantos datos quiere ingresarle a la Pila? ");
scanf("%i", &datos);
printf("\n");

printf("Cargando Pila...  \n");
printf("\n");

for(i = 1; i <= datos; i++) {
    leer(&p);
    printf("\n");
}
printf("Elementos de la Pila \n");
mostrar(&p);
}
//Ejercicio 2: Función que pasa los elementos de una pila a otra
/**Trabajamos en la dirección en memoria de la Pila creada en el main con sus datos, para poder acceder a ella*/
void pasajeDePila(Pila *pila2) { //Vamos a trabajar con el puntero de la pila
Pila auxPila;
inicpila(&auxPila);

while(!pilavacia(pila2)) { //Trabajamos con el puntero de la Pila
    apilar(&auxPila, desapilar(pila2));
}
mostrar(&auxPila);
}
//Ejercicio 3: Función que pasa los elementos de una pila a otra respetando el orden
void pasajeDePila3(Pila *pila3) {
Pila auxPila, auxPila2;
inicpila(&auxPila);
inicpila(&auxPila2);

while(!pilavacia(pila3)) { //Trabajamos con el puntero de la Pila
    apilar(&auxPila2, desapilar(pila3));
}

while(!pilavacia(&auxPila2)) {
    apilar((&auxPila), desapilar(&auxPila2));
}
mostrar(&auxPila);
}
//Ejercicio 4: Función encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila
int encontrarMenorPila(Pila *pila4) {
    int menorPila;
    Pila menor, auxPila4;
    inicpila(&menor);
    inicpila(&auxPila4);

    apilar(&menor, desapilar(pila4));

    while(!pilavacia(pila4)) {
        if(tope(pila4) < tope(&menor)) {
            apilar(&auxPila4, desapilar(&menor));
            apilar(&menor, desapilar(pila4));
        }
        else {
            apilar(&auxPila4, desapilar(pila4));
        }
    }

    while(!pilavacia(&auxPila4)) {
        apilar(pila4, desapilar(&auxPila4));
    }
    menorPila = tope(&menor);
    return menorPila;
}
//Ejercicio 5: Función que pase elementos de una pila a otra y que los ordene
void ordenamientoxSeleccion(Pila *pila5) {
    Pila menor, aux, ordenada;
    inicpila(&menor);
    inicpila(&aux);
    inicpila(&ordenada);
//Ordenamiento por selección
    while(!pilavacia(pila5)) {
        apilar(&menor, desapilar(pila5));

        while(!pilavacia(pila5)) {
            if(tope(&menor) > tope(pila5)) {
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(pila5));
            }
            else(apilar(&aux, desapilar(pila5)));
        }
        while(!pilavacia(&aux)) {
            apilar(pila5, desapilar(&aux));
        }
        apilar(&ordenada, desapilar(&menor));
    }
    mostrar(&ordenada);
}
//Ejercicio 6: Función insertar en una pila ordenada un elemento y conservar su orden
void ordenamientoxInsercion(Pila *pila6, Pila *dato) {
    Pila menor, aux, ordenada;
    inicpila(&menor);
    inicpila(&aux);
    inicpila(&ordenada);

//Ordenamiento por selección
    while(!pilavacia(pila6)) {
        apilar(&menor, desapilar(pila6));

        while(!pilavacia(pila6)) {
            if(tope(&menor) > tope(pila6)) {
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(pila6));
            }
            else {
                apilar(&aux, desapilar(pila6));
            }
        }

        while(!pilavacia(&aux)) {
            apilar(pila6, desapilar(&aux));
        }
        apilar(&ordenada, desapilar(&menor));
    }
    printf("Ordenando Pila... \n");
    mostrar(&ordenada);
    printf("\n");

//Pasar los valores a Pila 6
while(!pilavacia(&ordenada)) {
    apilar(&aux, desapilar(&ordenada));
}while(!pilavacia(&aux)) {
    apilar(pila6, desapilar(&aux));
}
//Ordenamiento por inserción
    while(!pilavacia(pila6) && tope(pila6) > tope(dato)) {
        apilar(&aux, desapilar(pila6));
    }

    apilar(pila6, desapilar(dato));

    while(!pilavacia(&aux)) {
        apilar(pila6, desapilar(&aux));
    }
    printf("Pila Ordenada por Insercion... \n");
    mostrar(pila6);
    printf("\n");
}

//Ejercicio 7: Funcion que pase los elementos de una pila a otra, generando una nueva pila ordenada(usar la funcion del ejercicio 6)
void pasajeDeOrdenadaxInsercion(Pila *pila7, Pila *dato2) {
    Pila menor, aux, ordenada, nueva;
    inicpila(&menor);
    inicpila(&aux);
    inicpila(&ordenada);
    inicpila(&nueva);

//Ordenamiento por selección
    while(!pilavacia(pila7)) {
        apilar(&menor, desapilar(pila7));

        while(!pilavacia(pila7)) {
            if(tope(&menor) > tope(pila7)) {
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(pila7));
            }
            else {
                apilar(&aux, desapilar(pila7));
            }
        }

        while(!pilavacia(&aux)) {
            apilar(pila7, desapilar(&aux));
        }
        apilar(&ordenada, desapilar(&menor));
    }
    printf("Ordenando Pila... \n");
    mostrar(&ordenada);
    printf("\n");

//Pasar los valores a Pila 6
while(!pilavacia(&ordenada)) {
    apilar(&aux, desapilar(&ordenada));
}while(!pilavacia(&aux)) {
    apilar(pila7, desapilar(&aux));
}
//Ordenamiento por inserción
    while(!pilavacia(pila7) && tope(pila7) > tope(dato2)) {
        apilar(&aux, desapilar(pila7));
    }

    apilar(pila7, desapilar(dato2));

    while(!pilavacia(&aux)) {
        apilar(pila7, desapilar(&aux));
    }
    printf("Pila Ordenada por Insercion... \n");
    mostrar(pila7);
    printf("\n");

    while(!pilavacia(pila7)) {
        apilar((&aux), desapilar(pila7));
    }
    while(!pilavacia(&aux)) {
        apilar((&nueva), desapilar(&aux));
    }

    printf("Pasando los elementos a otra pila... \n");
    printf("\n");
    printf("Mostrando Pila nueva con los elementos: \n");
    mostrar(&nueva);
}
//Ejercicio 7: Funcion que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido
//Retorna el tope
int devolver1(Pila *pila8) {
int n1;

n1 = tope(pila8);

return n1;
}
//Retorna el anterior del tope
int devolver2(Pila *pila8) {
int n2;
Pila aux;
inicpila(&aux);

apilar(&aux, desapilar(pila8));

n2 = tope(pila8);

apilar(pila8, desapilar(&aux));

return n2;
}
//Suma el tope y su anterior
int suma2ElementosPila(int a, int b)  {
int suma;

suma = a + b;

return suma;
}
//Ejercicio 9:Función que calcule el promedio de los elementos de una pila, para ello hacer también
//una función que calcule la suma, otra para la cuenta y otra que divida. En total son cuatro
//funciones, y la función que calcula el promedio invoca a las otras 3

//Función que cuenta los elementos de la Pila
int contadorElementos(Pila *pila9) {
    Pila aux;
    inicpila(&aux);

    int contador;
    contador = 0;

    while(!pilavacia(pila9)) {

        apilar(&aux, desapilar(pila9));
        contador = contador + 1;
    }

    while(!pilavacia(&aux)) {
        apilar(pila9, desapilar(&aux));
    }
     return contador;
}

//Función que sume los elementos de la pila
int sumaElementos(Pila *pila9) {
    Pila aux;
    inicpila(&aux);
    int suma, contador, acumulador;
    acumulador = 0;

    while(!pilavacia(pila9)) {

        acumulador = acumulador + tope(pila9);
        apilar(&aux, desapilar(pila9));
        contador = contador + 1;
    }

    return acumulador;
}
//Función que promedia
float promedioElementos(int contador, int acumulador) {

    float promedio;

    promedio = acumulador / contador;

    return promedio;
}
//Ejercicio 10: Función que transforme los elementos de una Pila en un número decimal
void mostrarElementosPila(Pila *pila10) {

Pila aux, aux1, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9;
inicpila(&aux);
inicpila(&aux1);
inicpila(&aux2);
inicpila(&aux3);
inicpila(&aux4);
inicpila(&aux5);
inicpila(&aux6);
inicpila(&aux7);
inicpila(&aux8);
inicpila(&aux9);
int contador;
contador = 0;

//Contamos los elementos que tiene la pila
while(!pilavacia(pila10)) {
    apilar(&aux, desapilar(pila10));
    contador = contador + 1;
}
//Movemos nuevamente los elementos a la pila Original respetando el orden
while(!pilavacia(&aux)) {
    apilar(pila10, desapilar(&aux));
}

//Dependiendo la cantidad de elementos de la pila se va a ejecutar cierto código
switch(contador) {
int a, b, c, d, e, f, g, h, i;

    case 1:
        a = tope(pila10);
        printf("El elemento %i \n", a);
    break;

    case 2:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);

        printf("Los elementos: %i %i \n", a, b);

    break;

    case 3:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);
        apilar(&aux2, desapilar(pila10));
        c = tope(pila10);

        printf("Los elementos: %i%i%i \n", a, b, c);
    break;

    case 4:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);
        apilar(&aux2, desapilar(pila10));
        c = tope(pila10);
        apilar(&aux3, desapilar(pila10));
        d = tope(pila10);
        printf("Los elementos: %i%i%i%i \n", a, b, c, d);
    break;

    case 5:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);
        apilar(&aux2, desapilar(pila10));
        c = tope(pila10);
        apilar(&aux3, desapilar(pila10));
        d = tope(pila10);
        apilar(&aux4, desapilar(pila10));
        e = tope(pila10);
        printf("Los elementos: %i%i%i%i%i \n", a, b, c, d, e);
    break;

    case 6:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);
        apilar(&aux2, desapilar(pila10));
        c = tope(pila10);
        apilar(&aux3, desapilar(pila10));
        d = tope(pila10);
        apilar(&aux4, desapilar(pila10));
        e = tope(pila10);
        apilar(&aux5, desapilar(pila10));
        f = tope(pila10);
        printf("Los elementos: %i%i%i%i%i%i \n", a, b, c, d, e, f);
    break;

    case 7:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);
        apilar(&aux2, desapilar(pila10));
        c = tope(pila10);
        apilar(&aux3, desapilar(pila10));
        d = tope(pila10);
        apilar(&aux4, desapilar(pila10));
        e = tope(pila10);
        apilar(&aux5, desapilar(pila10));
        f = tope(pila10);
        apilar(&aux6, desapilar(pila10));
        g = tope(pila10);
        printf("Los elementos: %i%i%i%i%i%i%i \n", a, b, c, d, e, f, g);
    break;

    case 8:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);
        apilar(&aux2, desapilar(pila10));
        c = tope(pila10);
        apilar(&aux3, desapilar(pila10));
        d = tope(pila10);
        apilar(&aux4, desapilar(pila10));
        e = tope(pila10);
        apilar(&aux5, desapilar(pila10));
        f = tope(pila10);
        apilar(&aux6, desapilar(pila10));
        g = tope(pila10);
        apilar(&aux7, desapilar(pila10));
        h = tope(pila10);
        printf("Los elementos: %i%i%i%i%i%i%i%i \n", a, b, c, d, e, f, g,h);
    break;

    case 9:
        a = tope(pila10);
        apilar(&aux1, desapilar(pila10));
        b = tope(pila10);
        apilar(&aux2, desapilar(pila10));
        c = tope(pila10);
        apilar(&aux3, desapilar(pila10));
        d = tope(pila10);
        apilar(&aux4, desapilar(pila10));
        e = tope(pila10);
        apilar(&aux5, desapilar(pila10));
        f = tope(pila10);
        apilar(&aux6, desapilar(pila10));
        g = tope(pila10);
        apilar(&aux7, desapilar(pila10));
        h = tope(pila10);
        apilar(&aux8, desapilar(pila10));
        i = tope(pila10);
        printf("Los elementos: %i%i%i%i%i%i%i%i%i \n", a, b, c, d, e, f, g,h, i);
    break;
}
}
//Extra1: Función que cargue una pila sin usar la función leer
void cargaPila(int cantidad) {
Pila pilaCargada;
inicpila(&pilaCargada);
srand(time(NULL));
int i;

for(i = 1; i <= cantidad; i++) {
    apilar(&pilaCargada, rand()%100+1);
}
printf("Pila cargada: \n");
mostrar(&pilaCargada);
}




