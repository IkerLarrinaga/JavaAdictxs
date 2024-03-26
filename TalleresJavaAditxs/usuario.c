#include "usuario.h"
#include <stdio.h>
#include <string.h>

Usuario pedirUsuario() {
    Usuario u;

	printf("Introduce tu nombre: ");
	fflush(stdout);
	fflush(stdin);
	gets(u.nom);

	printf("Introduce tu contrasenna: ");
	fflush(stdout);
	fflush(stdin);
	gets(u.con);
	return u;
}

int contrasennaCorrecta(char* conU, char* con) {
    int correcta = 0;
	if(strcmp(conU, con)==0){
		correcta = 1;
	}
	return correcta;
}