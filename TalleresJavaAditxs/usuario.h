#ifndef USUARIO_H
#define USUARIO_H

typedef struct
{
    char* nombre;
    char* constrasenna;

} Usuario;

Usuario pedirUsuario();
int contrasennaCorrecta(char* conU, char* con);

#endif