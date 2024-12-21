#include<stdio.h>
#include<conio.h>
 int main()
 {
 	char opcion=' ';
 	int numero1=0, numero2=0,suma=0, division=0, resta=0, multiplicacion=0;
 	while(true)
 	{
 		printf("1.Suma\n");
 		printf("2.Resta\n");
 		printf("3.Division\n");
 		printf("4.Multiplicacion\n");
 		printf("<<esc=salir>>\n");
 		printf("Elige una opcion: \n");
 		opcion=getch();
 		printf("%c",opcion);
 		if(opcion==27)break;
 		switch(opcion)
 		{
 			case '1':
 				{
 					printf("Teclea un numero: ");
 					scanf("%i", &numero1);
 					printf("Teclea un segundo numero: ");
 					scanf("%i", &numero2);
 					suma= numero1 + numero2;
 					printf(" La suma de %i+%i=%i\n\n",numero1,numero2,suma);
 					getch();
 					break;
				 }
			case '2':
				{
						printf("Teclea un numero: ");
 					scanf("%i", &numero1);
 					printf("Teclea un segundo numero: ");
 					scanf("%i", &numero2);
 					resta= numero1 - numero2;
 					printf(" La resta de %i-%i=%i\n\n",numero1,numero2,resta);
 					getch();
 					break;
				}
			case '3':
				{
						printf("Teclea un numero: ");
 					scanf("%i", &numero1);
 					printf("Teclea un segundo numero: ");
 					scanf("%i", &numero2);
 					division= numero1 / numero2;
 					printf(" La division de %i/%i=%i\n\n",numero1,numero2,division);
 					getch();
 					break;
				}
			case '4':
				{
						printf("Teclea un numero: ");
 					scanf("%i", &numero1);
 					printf("Teclea un segundo numero: ");
 					scanf("%i", &numero2);
 					multiplicacion= numero1 * numero2;
 					printf(" La multiplicacion de %i*%i=%i\n\n",numero1,numero2,multiplicacion);
 					getch();
 					break;
				}
			}
		 }
	 }