#include<stdio.h>
int main()
{
	//1.Hola Mundo 
	//2.Hola Rommel
	//3.Adios Rommel
	int opcion;
	while(opcion!=4)
	{
	printf("1.Hola Mundo\n");
	printf("2.Hola Rommel\n");
	printf("3.Adios Rommel\n");
	printf("4.Salir\n");
    printf("Escoje una opcion: \n");
    scanf("%i",&opcion);
    printf("escogiste la opcion:%i\n",opcion);
    switch(opcion)
    {
    	case 1:
    		printf("Hola Mundo\n");
    		break;
        case 2:
        	printf("Hola Rommel\n");
        	break;
        case 3:
        	printf("Adios Rommel\n");
        	break;
        case 4:
        	printf("Saliendo\n");
        	break;
         default:
        	printf("No introduciste algo valio :(\n");
	}
    
}
}
