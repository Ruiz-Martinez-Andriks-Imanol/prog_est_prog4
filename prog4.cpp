/* Autor: Andriks Imanol Ruiz Mart�nez, Realizado: 03/02/2022 
	Escuela: Universidad del Valle de Mexico Campus Villahermosa
	Materia: Programaci�n Estructrada
	Ciclo: 01/2022
   Este es un programa de la estructura b�sica de Lenguaje C de la materia de Programaci�n Estructurada<br>
	Muestra el uso de:
    -Variables flotantes.
    -printf para mostrar varias variables.
    -scanf.
    -El uso de include para las librerias.
    -math.h para habiliar operaciones matem�ticas.
	-Comentarios para la doumentaci�n interna del programa.
	*/
#include<stdio.h>
#include<math.h>

int main(){
	float r, a;
	//Entrada de datos
	printf("Introduce el radio del circulo: ");
	scanf("%f", &r);
	//proceso
	a=M_PI*pow(r,2);
	//Salida
	printf("El area de un circulo es %f", a);
	
	return 0;
}
