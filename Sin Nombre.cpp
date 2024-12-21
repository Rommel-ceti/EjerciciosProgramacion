#include<conio.h>
#include<stdio.h>

void tipodeentrada(){
	printf("Estoy en la funcion tipo de entrada\n");
}
void numeros(){
	int CONTADOR=0;
	for(CONTADOR; CONTADOR<=10; CONTADOR++){
		printf("%i\n",CONTADOR);
	}
}


 int main()
 {
 	tipodeentrada();
 	numeros();
 	
 }