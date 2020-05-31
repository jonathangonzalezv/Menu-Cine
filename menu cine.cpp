#include <stdio.h>
#include <stdlib.h>

int main()
{
	char opcion;
	printf("BIENVENIDO AL CINE\n");
	printf("A- PELICULAS\n");
	printf("B- BOLETOS\n");
	printf("C- DESCUENTOS\n");
	printf("D- TIPO DE SALA\n");
	printf("E- COMBOS\n");
	printf("F- BEBIDAS\n");
	printf("G- DULCERIA\n");
	printf("H- SNACKS\n");
	printf("I- SALIR\n");
	
	printf("TECLEE LA OPCION A EJECUTAR\n");
	scanf("%s",&opcion);

switch(opcion) 
{
    case 'A': 
    printf("   PELICULAS  \n");
    printf("ROMANTICAS\n");
    printf("CIENCIA FICCION\n");
    printf("DRAMA\n");
    printf("TERROR\n");
    printf("MUSICALES\n");
    break;
    case 'B': 
    printf("   BOLETOS   \n");
    printf("INFANTIL\n");
    printf("ADULTO\n");
    printf("INAPAM\n");
    break;
    case 'C': 
    printf("    DESCUENTOS   \n");
    printf("CORTESIAS\n");
    printf("2X1\n");
    break;
    case 'D': 
    printf("TIPO DE SALA \n");
    printf("2D\n");
    printf("3D\n");
    printf("4D\n");
    printf("VIP\n");
    break;
    case 'E': 
    printf("COMBOS\n");
    printf("COMBO AMIGOS\n");
    printf("COMBO FAMILIAR\n");
    printf("COMBO PAREJA\n");
    printf("COMBO MAX\n");
    break;
    case 'F': 
    printf("BEBIDAS\n");
    printf("REFRESCOS\n");
    printf("JUGOS\n");
    printf("ICE\n");
    break;
    case 'G': 
    printf("SNACKS\n");
    printf("PALOMITAS\n");
    printf("NACHOS\n");
    printf("HOT DOG\n");
    break;
    case 'H': 
    printf("DULCES\n");
    printf("CHOCOLATES\n");
    printf("PALETAS\n");
    printf("GOMITAS\n");
    printf("LUNETAS\n");
    break;
    case 'I': 
    break;
	}
	
}

