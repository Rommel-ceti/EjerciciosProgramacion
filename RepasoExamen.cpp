#include<conio.h>
#include<stdio.h>
int main(){
int numero1=0,numero2=0, multiplicacion=0;
const char* opcion1="1.suma\n";
const char* opcion2="2.resta\n";
const char* opcion3="3.multiplicacion\n";
const char* opcion4="4.division\n";
printf("Escribe un valor numerico: \n");
scanf("%i", &numero1 );
printf("Escribe otro valor numerico: \n");
scanf("%i", &numero2);
multiplicacion= numero1* numero2;
printf("La multiplicacion de %i * %i es igual a : %i\n",numero1,numero2,multiplicacion);
for(int resultado=multiplicacion; resultado>=0; resultado--)
{
	printf("numero actual es %i\n", resultado);
}
if ( multiplicacion%3==0){
	printf("El numero divisible entre 3\n");
}
else{
	printf("El numero no es divisible entre 3\n");
}
int seleccion;
printf(opcion1);
printf(opcion2);
printf(opcion3);
printf(opcion4);
scanf("%i", &seleccion);
switch(seleccion)
{
	case 1:
	printf("La suma es: %i\n", numero1+ numero2);
	break;
	case 2:
		printf(" La resta es: %i\n", numero1- numero2);
		break;
	case 3:
		printf(" la multiplicacion es: %i\n", numero1* numero2);
		break;
	case 4:
		printf(" la division es: %i\n", numero1/ numero2);
		break;
}
}