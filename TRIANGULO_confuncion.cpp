#include<stdio.h>
#include<conio.h>
void triangulo(){
	int altura=0,contador=0,contador2=0;
	printf("Introduce la altura de el triangulo\n");
	scanf("%i", &altura);
	for( int contador=1;contador<=altura;contador++)
	{
		for(int contador2=altura; contador2>=contador;contador2--)
		{
			printf("*");
		}
		printf("\n");
	}
}
 int main()
 {
 	triangulo();
 }