#include<stdio.h>
 int main()
 {
 	int edad=0;
 	printf("introduce la edad: \n");
 	scanf("%i", &edad);
 	if(edad<18){
 		printf("menor de edad\n");
	 }
	 else{
	 	printf("mayor de edad\n");
	 }
 }