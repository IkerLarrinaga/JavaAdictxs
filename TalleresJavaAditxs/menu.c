#include <stdio.h>
#include "menus.h"

char menuPrincipal(){
	char opcion;
    printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
	printf("1. Iniciar Sesion\n");
	printf("2. Registrarse\n");
	printf("0. Salir\n");
	printf("Elige una opcion: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuUsuario(){
	char opcion;
	printf("1. Comprar coche\n");
	printf("2. Vender coche\n");
	printf("3. Ver todos los coches\n");
	printf("0. Volver al menu principal\n");
	printf("Elige una opcion: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuCliente() {
    char opcion;
	printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
    printf("1. Servicios\n");
	printf("2. Editar mis datos\n");
	printf("3. Ver historial\n");
	printf("0. Salir\n");
	printf("Elige una opcion: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuServicios() {
    char opcion;
    printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
	printf("1. Revisión\n");
	printf("2. Mantenimiento\n");
	printf("3. Arreglos\n");
	printf("4. Chapa y pintura\n");
	printf("5. Otro\n");
	printf("6. Editar mis datos\n");
	printf("7. Ver historial\n");
	printf("0. Salir\n\n");
	printf("Elige una opcion: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuArreglos() {
    char opcion;
    printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
	printf("ARREGLOS\n");
	printf("*************************\n");
	printf("1. Llantas\n");
	printf("2. Luna\n");
	printf("3. Motor\n");
	printf("4. Otro\n");
	printf("0. Salir\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuInventario() {
    char opcion;
    printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
	printf("SERVIDOR: Menú --> Inventario\n");
	printf("*****************************\n");
	printf("1. Anyadir producto nuevo\n");
	printf("2. Eliminar un producto\n");
	printf("3. Eliminar todo el inventario\n");
	printf("0. Salir\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuControlTaller() {
    char opcion;
    printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
	printf("SERVIDOR: Menú\n");
	printf("**************\n");
	printf("1. Inventario\n");
	printf("2. Registro del servicio\n");
	printf("0. Salir\n\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuColores() {
    char opcion;
    printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
	printf("CLIENTE: Menú --> Servicios\n");
	printf("***************************\n");
	printf("Chapa y Pintura:\n");
	printf("1. Rojo\n");
	printf("2. Azul\n");
	printf("3. Negro\n");
	printf("4. Gris claro\n");
	printf("5. Gris oscuro\n");
	printf("6. Verde\n");
	printf("7. Blanco\n");
	printf("8. Marrón\n");
	printf("8. Otro\n");
	printf("0. Salir\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}

char menuSucursal() {
    char opcion;
    printf("TALLER DE COCHES JAVADICTX\n");
	printf("--------------------------\n");
	printf("SERVIDOR:\n");
	printf("*********\n");
	printf("Elige sucursal:\n");
	printf("1. Bilbao\n");
	printf("2. Zaragoza \n");
	printf("3. Barcelona\n");
	printf("4. Madrid \n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&opcion);
	return opcion;
}




    

    
	

    


