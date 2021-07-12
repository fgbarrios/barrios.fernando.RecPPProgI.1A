#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

 Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
 y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.
*/

/*
Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro
y un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena *

*/

int contarCaracteres(char cadena[], char caracter);

int aplicarDescuento(int precioProd);

int main()
{
    int producto1 = 100;
    int precioConDesc;

    precioConDesc = aplicarDescuento(producto1);
    printf("%d\n", precioConDesc);

    ////////////////////////////////////////// 2do ejercicio

    char cadena[] = "cadena de caracteres";
    char caracter = 'c';
    int cantidadCaracteres;

    cantidadCaracteres = contarCaracteres(cadena, caracter);
    printf("La cantidad de veces que se repite es: %d\n", cantidadCaracteres);

}

int aplicarDescuento(int precioProd){
    int precioConDesc;
    if(precioProd > 0){
        precioConDesc = precioProd - (precioProd * 5 / 100) ;
    }
    return precioConDesc;
}

int contarCaracteres(char cadena[], char caracter){
    int tam;
    int contador = 0;

    if(cadena != NULL && caracter != '\0'){
        tam = strlen(cadena);
        for (int i = 0;i < tam ;i++ ){
            if(cadena[i] == caracter ){
                contador++;
            }
        }
    }
    return contador;
}



