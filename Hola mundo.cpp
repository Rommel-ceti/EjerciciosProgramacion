#include<conio.h>
#include<stdio.h>
int suma(int numero1, int numero2){ 
printf("Estoy en la funcion suma\n");
return numero1 + numero2;
}
int resta(int numero1, int numero2){
	printf("EStoy en la funcion resta\n");
	return numero1 - numero2;
}
int multiplicacion(int numero1, int numero2){
	printf("Estoy en la funcion multiplicacion\n");
	return numero1 * numero2;
}
double division(double numero1, double numero2){
	printf("Estoy en la funcion division\n");
	return numero1/numero2;
}


 int main()
 {
 	int resultado, resultado2, resultado3;
 	double resultado4;
 	printf("Hola Mundo");
 	resultado= suma(2,5);
 	printf("el resultado es :%i\n", resultado);
 	resultado2= resta(3,1);
 	printf("el resultado es :%i\n", resultado2);
 	resultado3= multiplicacion(3,4);
 	printf("el resultado es :%i\n", resultado3);
 	resultado4= division(12.40,5.20);
 	printf("el resultado es :%f\n", resultado4);
 	int numero=9;
	printf("%b\n",numero);
}