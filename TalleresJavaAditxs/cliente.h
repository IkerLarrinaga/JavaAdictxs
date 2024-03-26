#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct
{
    char dni[9];
    char* nombre;
    char* apellido;
    char* email;
    char* direccion;
    int telefono;

} Cliente;

#endif